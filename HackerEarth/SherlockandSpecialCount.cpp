// AUTHOR :: RAHUL MISTRY
// DATE   :: 21/03/2023


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
	ll t, z, w, d, y, x, sum, k, q,n,m;
	// memset(NCR,-1,sizeof(NCR));
	// memset(isprime, 1, sizeof(isprime));
	// sieve();
	// fact();
    cin >> t;
    while (t--)
    {
        cin>>n>>k;
		ll mn=n-1;
		ll mx=0;
		for(int i=1;i<=n;i++)
		{
			mx+=(abs(n-(2*i)));
		}
		// cout<<mx<<" ";
		if(k<=mx&&(k%2==0))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
    }
    return 0;
}