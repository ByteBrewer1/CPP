
// AUTHOR :: RAHUL MISTRY
// DATE   :: 00 / 00 / 2023


#include <bits/stdc++.h>
using namespace std;

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a/gcd(a,b)*b)
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)
#define is_prime(a) ((a)==2||(a)>1&&((a)&1)&&__builtin_probabiliyll((a),2))
#define yes() cout<<"YES\n"
#define no() cout<<"NO\n"

/* clang-format on */
void solve();
/* Main()  function */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif

    long long t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
/* Main() Ends Here */

void solve() {
    // Add Your Program here...
    ll N, K;
    cin >> N >> K;
    if(K == 0){
        cout << N << "\n";
        return;
    }
    cout << (N - (K * (N / K))) << endl;
}