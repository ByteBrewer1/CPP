// AUTHOR :: RAHUL MISTRY
// DATE   :: 27/03/2023

#pragma GCC optimze("Ofast")
#include "bits/stdc++.h"
using namespace     ;
using base = compl  x<double>;
#include <ext/pb_d  /assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __  nu_pbds;
#define mod 100000  007
#define M2 998244353        define ll long long
#define ld long doub    e
#define pll pair<ll,l   >
#define inf 1e18
#define fl(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define N 1000005
#define all(c) c.begin(),c.end()
#define sz(s) (int)s.size()

#define o_set(T) tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>
//member functions :
//to delete an element
//s.erase(s.find_by_order(s.order_of_key(ele)));
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

// To remove randomization use 0 below:
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
inline int ri(int x) { // from [0, n-1]
    return uniform_int_distribution<int>(0, x - 1)(rng);
}

inline ld rf() { // from [0, 1]
    return uniform_real_distribution<ld>(0, 1)(rng);
}

int add(int x, int y) {
    x += y;
    if (x >= mod) {
        x -= mod;
    }
    return x;
}

int sub(int x, int y) {
    x -= y;
    if (x < 0) {
        x += mod;
    }
    return x;
}

int mul(int x, int y) {
    return (long long)x * y % mod;
}

/*SOME BITMASK KNOWLEDGE
1)x & (x - 1):sets the last one bit of x to zero
power of two exactly when x & (x − 1) = 0.
2)x & -x:sets all the one bits to zero, except last one bit
3)x | (x - 1):inverts all the bits after the last one bit*/

//debugging template
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a, b) cout << a << " " << b << endl
#define p3(a, b, c) cout << a << " " << b << " " << c << endl
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl

void solve()
{
    ll n; cin >> n;
    vll v(n);
    fl(i,0,n) cin >> v[i];
    ll cur = v[0], ans = 0;
    for(int i = 1; i < n; i++) {
        if(v[i] <= cur) {
            ans += cur - v[i] + 1; cur = v[i];
        }
        else {
            cur = v[i];
       //   ans += v[i] - cur;
        }
    }
    ans += cur;
    cout << ans << endl;
}


signed main()
{
    std::ios::sync_with_stdio(false);
    int T=1;
    cin>>T;
   // cin.ignore(); must be there when using getline(cin, s)
    while(T--)
    {
        solve();
    }
    return 0;
}