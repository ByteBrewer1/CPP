/*
██████   █████  ██   ██ ██    ██ ██          ███    ███ ██ ███████ ████████ ██████  ██    ██ 
██   ██ ██   ██ ██   ██ ██    ██ ██          ████  ████ ██ ██         ██    ██   ██  ██  ██  
██████  ███████ ███████ ██    ██ ██          ██ ████ ██ ██ ███████    ██    ██████    ████   
██   ██ ██   ██ ██   ██ ██    ██ ██          ██  ██  ██ ██      ██    ██    ██   ██    ██    
██   ██ ██   ██ ██   ██  ██████  ███████     ██      ██ ██ ███████    ██    ██   ██    ██    
*/
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


long long nearestPowerOf2(long long N)
{
    long long a = log2(N);

    return pow(2, a + 1);
}


int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        if(num1 > num2 && num2 < num3)
            cout << -1 << endl;
        else if(num1 < num2 && num3 < num2)
            cout << -1 << endl;
        else if(num1 < num2 && num2 < num3)
            cout << 0 << endl;
        else {
            ll ans = max(num1, max(num2, num3));
            cout << nearestPowerOf2(ans)-1 << endl;
        }
    }
}
