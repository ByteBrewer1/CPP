// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

#include<bits/stdc++.h>
using namespace std;

void solve(){
        int d,c;
	    cin>>d>>c;
	    
        int a1,a2,a3;
	    cin>>a1>>a2>>a3;
	    
        int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    
	    int day1=a1+a2+a3;
	    
        int day2=b1+b2+b3;
	    
        int with_coupon=c;
	    
        if(day1>=150){
	        with_coupon+=day1;
	    }
	    
        else{
	        with_coupon+=(day1+d);
	    }
	    
        if(day2>=150)with_coupon+=day2;
	    
        else
	        with_coupon+=(day2+d);
	   
	   int without_coupon=0;
	   
       without_coupon=(day1+day2+2*d);
	   
       if(with_coupon<without_coupon){
	       cout<<"YES"<<endl;
	   }
	   else{
            cout<<"NO"<<endl;
	   }
}


int main(){
    int test_case;
    cin >> test_case;

    while(test_case--){
        solve();
    }


    return 0;
}