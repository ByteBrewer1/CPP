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

void solve()
{
    int x;
    cin >> x;
    if (x == 1)
    {
        cout << "0" << endl;
        return;
    }
    if (x % 2 == 0)
    {
        cout << "-1" << endl;
        return;
    }
    int p = floor(log2(x));
    int d = (x - ((1 << p) + 1)) / 2;
    cout << p << "\n2 ";
    for (int i = p - 2; i >= 0; i--)
    {
        if ((d & (1 << i)) != 0)
            cout << "2 ";
        else
            cout << "1 ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        solve();
    }
    return 0;
}