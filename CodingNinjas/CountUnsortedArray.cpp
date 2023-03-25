// AUTHOR :: RAHUL MISTRY
// DATE   :: 25/03/2023

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

int countColumns(vector<string> &strings) {
    int n = strings.size(); // number of strings
    int m = strings[0].size(); // length of each string
    int count = 0; // initialize the count of unsorted columns to 0
    
    for (int j = 0; j < m; j++) { // iterate over each column
        bool sorted = true; // assume the column is sorted initially
        for (int i = 1; i < n; i++) { // iterate over each row in the column
            if (strings[i][j] < strings[i-1][j]) { // check if the current row is less than the previous row in the column
                sorted = false; // if yes, then the column is not sorted
                break; // no need to check the remaining rows in the column
            }
        }
        if (!sorted) { // if the column is not sorted, increment the count of unsorted columns
            count++;
        }
    }
    return count; // return the count of unsorted columns
}

int main() {
    // test example
    vector<string> strings = {"bde", "dcf", "gat"};
    cout << countColumns(strings) << endl; // output: 2
    return 0;
}
