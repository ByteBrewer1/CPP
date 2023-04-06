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

bool searchMatrix(vector<vector<int>>& matrix, int key) {
    int rows = matrix.size();
    if (rows == 0) {
        return false;
    }
    int cols = matrix[0].size();
    if (cols == 0) {
        return false;
    }
    
    int left = 0;
    int right = rows * cols - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midVal = matrix[mid / cols][mid % cols];
        if (midVal == key) {
            return true;
        } else if (midVal < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return false;
}
