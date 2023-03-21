// AUTHOR :: RAHUL MISTRY
// DATE   :: 21/03/2023
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y,z,c=0;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        if(x+y+z>=2){
            c++;
        }
    }
    
    cout<< c << endl;
    return 0;
}