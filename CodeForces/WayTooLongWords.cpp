// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        
        if(n <= 10){
            cout << s << endl;
        }
        else{
            cout << s[0] << (s.length()-2) << s[n-1] << endl;
        }
    }
    return 0;
}
