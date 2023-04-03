// AUTHOR :: RAHUL MISTRY
// DATE   :: 03/04/2023

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0
// order_of_key(k) returns count of elements strictly smaller than k
#define fix(f,n) std::fixed<<std::setprecision(n)<<f
#define epsi (double)(0.00000000001)
typedef long long int ll;
typedef unsigned long long int ull;
#define vi vector<ll>
#define pii pair<ll,ll>
#define vii vector<pii>
#define max(a,b) ((a>b)?a:b)
#define min(a,b) ((a>b)?b:a)
#define min3(a,b,c) min(min(a,b),c)
#define max3(a,b,c) max(max(a,b),c)
#define ff(a,b,c) for(int a=b; a<=c; a++)
#define frev(a,b,c) for(int a=c; a>=b; a--)
#define REP(a,b,c) for(int a=b; a<c; a++)
#define pb push_back
#define mp make_pair
#define endl "\n"
#define all(v) v.begin(),v.end()
#define sz(a) (ll)a.size()
#define F first
#define S second
#define ld long double
//#define INF 2000000000000000000
#define mem0(a) memset(a,0,sizeof(a))
#define mem1(a) memset(a,-1,sizeof(a))
#define ub upper_bound
#define lb lower_bound
#define setbits(x) __builtin_popcountll(x)
#define trav(a,x) for(auto &a:x)
#define make_unique(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rev(arr) reverse(all(arr))
#define gcd(a,b) __gcd(a,b);
#define ub  upper_bound // '>'
#define lb  lower_bound // '>='
#define qi queue<ll>
#define si stack<ll>

const long double PI = acos(-1);

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

bool prime[200001];
void SieveOfEratosthenes(){ 
    memset(prime, true, sizeof(prime)); 
    prime[1]=false;
    for(ll p=2; p*p<=200000; p++){
        if(prime[p] == true){
            for (int i=p*p; i<=200000; i += p)
                prime[i] = false;
        }
    }
    return;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y){
    if(a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    ll x1, y1;
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
 
ll modInverse(ll a, ll m){
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
        ll res = (x%m + m) % m;
        return res;
}

ll binary_Search(vector<ll>&arr,ll key){
    ll l=0,r=arr.size()-1;
    ll ans;
    while(l<=r){
        ll mid=(l+r)/2;
        ll value=arr[mid];
        if(value>key){
            r=mid-1;
        }else if(value==key){
            return mid;
        }else{
            l=mid+1;
        }
    }
    return -1;
}
 
ll power(ll x,ll y,ll p){
    ll res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0){  
        if (y & 1)  
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

const int N=1e5+5;
const ll INF=1e18;

void solve(){
    ll n,m,x,y;
    cin >> n >> m >> x >> y;
    for(int i=0 ; i<n ; i++){
        string s;
        cin >> s;
        int c0=0,c1=0;
        for(int j=0 ; j<m ; j++){
            if(s[j]=='F'){
                c0++;
            }else if(s[j]=='P'){
                c1++;
            }
        }
        if(c0>=x || (c0==(x-1) && c1>=y)){
            cout << 1;
        }else{
            cout << 0;
        }
    }
    cout << "\n";
}

int main(){
    fast;
    //freopen ("auxiliary.in","r",stdin);
    //freopen ("auxiliary.out","w",stdout);
    int test=1;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}