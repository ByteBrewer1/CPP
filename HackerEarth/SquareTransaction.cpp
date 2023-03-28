// AUTHOR :: RAHUL MISTRY
// DATE   :: 27/03/2023

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ll long long
#define ull unsigned long long
#define ed '\n'
#define pb push_back
#define ii pair<ll,ll>
#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define rep(i,a,b) for(int i=a; i<=b; ++i)
#define int long long

using namespace __gnu_pbds;
using namespace std;

const int N = 1e5 + 10;
int a[N];
//
void solve() {
    int n, q;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        a[i] += a[i-1];
    }
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        if (x > a[n]) cout << -1 << ed;
        else cout << lower_bound(a+1, a+n+1, x) - a << ed;
    }
}
//
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    if (fopen("cf.inp", "r")) {
        freopen("cf.inp", "r", stdin);
        //freopen("cf.inp", "w", stdout);
    }
    solve() ;
    return 0;
}