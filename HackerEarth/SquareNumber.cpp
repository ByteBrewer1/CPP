#include <iostream>
using namespace std;

int main() {
    long long int n ;
    cin >> n;
    long long int left = 1, right = n , ans = 0;
    while (left <= right){
        long long int mid = (right + left )/ 2;
        if(mid * mid == n){
            ans = mid ;
            break;
        }
        else if (mid* mid < n){
            left = mid + 1 ;
        }
        else if(mid * mid > n){
            right = mid - 1; 
        }
        
    }
    if(ans * ans == n){
		cout <<"YES";
	}
	else{
		cout << "NO";
	}
    
}