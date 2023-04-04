// AUTHOR :: RAHUL MISTRY
// DATE   :: 04/03/2023

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
    int kDiffPairs(vector<int> &A, int k)
    {
        // Initialize the two pointers to the start of the array and a counter variable to 0
        int left = 0, right = 0, count = 0;

        // Iterate over the array while the right pointer is within bounds
        while (right < A.size())
        {
            // If left and right are equal, or the difference between A[right] and A[left] is less than k, increment the right pointer
            if (left == right || A[right] - A[left] < k)
            {
                right++;
            }
            // If the difference between A[right] and A[left] is greater than k, increment the left pointer
            else if (A[right] - A[left] > k)
            {
                left++;
            }
            // If the difference between A[right] and A[left] is exactly k, increment the count and move the left pointer, skipping over any duplicates
            else
            {
                count++;
                left++;
                while (left < A.size() && A[left] == A[left - 1])
                {
                    left++;
                }
            }
        }

        // Return the final count of k-diff pairs
        return count;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int ans = Solution().kDiffPairs(A, k);
        cout << ans << endl;
    }
    return 0;
}