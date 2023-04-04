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

class Solution
{
public:
    int threeSumClosest(vector<int>, int);
};

int Solution::threeSumClosest(vector<int> &A, int B)
{
    sort(A.begin(), A.end());
    ll closest_value = A[0] + A[1] + A[2]; // initialize with first triplet
    for (int i = 0; i < A.size() - 2; i++)
    {
        int left = i + 1, right = A.size() - 1;
        while (left < right)
        {
            ll sum = (ll)A[i] + A[left] + A[right]; // use long long to avoid integer overflow
            if (abs(sum - B) < abs(closest_value - B))
            {
                closest_value = sum;
            }
            if (sum < B)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return closest_value;
}

int main()
{
    // test cases
    Solution s;
    vector<int> A = {-1, 2, 1, -4};
    cout << s.threeSumClosest(A, 1) << endl;
    return 0;
}