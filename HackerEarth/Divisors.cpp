// AUTHOR :: RAHUL MISTRY
// DATE :: 04/03/2023

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll count = n / a + n / b - n / ((a * b) / __gcd(a, b));
    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}