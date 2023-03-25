// AUTHOR :: RAHUL MISTRY
// DATE   :: 25/03/2023

#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int n= s.size();
    
    if(s[n-2] == 'A' && s.substr(0,2) == "12"){
        s.replace(0,2, "00");
    }
    else if(s[n-2] == 'P'){
        int time= stoi(s.substr(0,2));
        if(time < 12){
            time += 12;
        }
        
        s.replace(0,2, to_string(time));
    }
    
    return s.substr(0,n-2);
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
