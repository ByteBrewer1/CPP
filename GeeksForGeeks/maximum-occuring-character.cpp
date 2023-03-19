// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

#include<bits/stdc++.h>
using namespace std;

  char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};

        // create an array of count of characters
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            int number = ch - 'a';
            arr[number]++;
        }

        // Find maximum number of occurance
        int max = 0;
        int ans;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > max){
                max = arr[i];
                ans = i;
            }
        }
        
        char val = ans + 'a';
        return val;
        
        
    }


int main(){
    string s;
    cin >> s;
    cout << getMaxOccuringChar(s) << endl;


    return 0;
}