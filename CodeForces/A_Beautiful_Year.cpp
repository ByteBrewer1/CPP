// AUTHOR :: RAHUL MISTRY
// DATE   :: 15 / 05 / 2023

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
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b) * b)
#define to_upper(a) transform((a).begin(), (a).end(), (a).begin(), ::toupper)
#define to_lower(a) transform((a).begin(), (a).end(), (a).begin(), ::tolower)
#define is_prime(a) ((a) == 2 || (a) > 1 && ((a)&1) && __builtin_probabiliyll((a), 2))
#define yes() cout << "YES\n"
#define no() cout << "NO\n"

/* clang-format on */
bool isDistinct(int x)
{
    int a1 = x / 1000;
    int a2 = (x / 100) % 10;
    int a3 = (x / 10) % 10;
    int a4 = x % 10;
    if (a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4)
        return true;
    return false;
}
/* Main()  function */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int x;
    cin >> x;
    x++;
    while (!isDistinct(x))
        x++;
    cout << x;
    return 0;
}
/* Main() Ends Here */
