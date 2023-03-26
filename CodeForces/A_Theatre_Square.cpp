// AUTHOR :: RAHUL MISTRY
// DATE   :: 00/00/2023

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll m, n, a;
    cin >> m >> n >> a;
    // taking length as largest and width as minimum
    ll l = max(m, n);
    ll b = min(m, n);

    ll ans;
    ll length;
    ll width;
    // if length is divisble by a then length will be 
    if((l%a) == 0){
        length = l/a;
    }
    // else we have to add +1 in length because of integer
    else{
        length = (l/a)+1;
    }
    if((b%a) == 0){
        width = b/a;
    }
    else{
        width = (b/a)+1;
    }
    ans = length*width;
    

    cout << ans << endl;
    return 0;
}