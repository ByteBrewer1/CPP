// AUTHOR :: RAHUL MISTRY
// DATE   :: 21/03/2023

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(){
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }
    // sorting
    sort(arr, arr+n, greater<ll>());
    // Initialize at the maximum elements
    ll maxMultiplication = arr[0] * arr[1];
    ll answer = maxMultiplication + max(arr[0], arr[1]) - min(arr[0], arr[1]);
    answer = max(answer, arr[n-1] * arr[n-2] + max(arr[n-1], arr[n-2]) - min(arr[n-1], arr[n-2]));
    answer = max(answer, arr[n-1] * arr[0] + max(arr[n-1], arr[0]) - min(arr[n-1], arr[0]));
    
    cout << answer << endl;
    // when one of the two numbers is zero, then a-b will be more than a*b
    // 1 2 3 4
    // ans = 13
    // 4 1 -2 -3 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}