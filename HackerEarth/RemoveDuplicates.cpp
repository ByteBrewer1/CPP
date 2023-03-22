// AUTHOR :: RAHUL MISTRY
// DATE   :: 22/03/2023

#include<bits/stdc++.h>

using namespace std;

string removeDuplicates_(string str){

    int b=0;

    int i=0;

    int n=str.size();

    int l=0;

    while(i<n){

        int x=str[i]-97;

        if((b & (1 << x))==0){

            str[l]=str[i];

            b=(b|(1<<x));

            l++;

        }

        i++;

    }

    return str.substr(0,l);

}

int main(){

    ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);



string str;

cin>>str;

cout<<removeDuplicates_(str)<<endl;

return 0;

}