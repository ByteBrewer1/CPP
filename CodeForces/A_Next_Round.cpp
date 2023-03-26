// AUTHOR :: RAHUL MISTRY
// DATE   :: 26/03/2023

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
    // n = number of contestant
    // k = kth player score
    int a,b,c=0;
    cin>>a>>b;
    int x[a];
    for (int i=0; i<a; i++)
        cin>>x[i];
    for (int i=0; i<a; i++){
        if (x[i] >= x[b-1] && x[i] > 0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
// https://codeforces.com/problemset/problem/158/A