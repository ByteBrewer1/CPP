#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define F first
#define S second
#define pll pair<ll, ll>
#define vll vector<ll>
const int N = 1e5 + 11, mod = 1e9 + 7;
ll arr[N];
ll max(ll a, ll b) { return ((a > b) ? a : b); }
ll min(ll a, ll b) { return ((a > b) ? b : a); }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


void sol(void)
{
    ll number_of_episodes; cin >> number_of_episodes;
    vll intro_length(number_of_episodes);
    ll ans = 0;
    for (int i = 0; i < number_of_episodes; ++i)
    {
        cin >> intro_length[i];
    }
    for (int i = 1; i <= number_of_episodes; ++i)
    {
        ll a; cin >> a;
        for(int j = 1; j <= a; ++j)
        {
            ll x; cin >> x;
            if (j == 1) 
                ans += x;	
            else 
                ans += x - intro_length[i-1];
        }
    }
    cout << ans << endl;
    return;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
        sol();
}