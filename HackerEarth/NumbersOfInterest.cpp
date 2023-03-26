#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x , y , n;
    cin >> x >> y >> n;
    swap(x , y);
    if(n <= y)
    cout<<x<<"\n";
    else{
        long long dp[n] = {0};
        for(int i = 0 ; i < y ; i++)
        dp[i] = x;
        for(int j = y ; j < n ; j++){
            long long sum = 0;
            for(int i = j - 1 ; i >= j - y ; i--){
                sum += dp[i];
            }
            dp[j] = sum;
        }
        cout<<dp[n - 1]<<"\n";
        // for(int i = 0 ; i < n ; i++)
        // cout<<dp[i]<<" ";
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}