// AUTHOR :: RAHUL MISTRY
// DATE   :: 04/03/2023

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

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
    vector<vector<int>> threeSum(vector<int> &A)
    {
        vector<vector<int>> ans;
        int n = A.size();
        if (n < 3)
            return ans;
        sort(A.begin(), A.end());
        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && A[i] == A[i - 1])
                continue; // skip duplicates
            int l = i + 1, r = n - 1;
            while (l < r)
            {
                int sum = A[i] + A[l] + A[r];
                if (sum < 0)
                    l++;
                else if (sum > 0)
                    r--;
                else
                {
                    ans.push_back({A[i], A[l], A[r]});
                    l++;
                    r--;
                    while (l < r && A[l] == A[l - 1])
                        l++; // skip duplicates
                    while (l < r && A[r] == A[r + 1])
                        r--; // skip duplicates
                }
            }
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> A = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = Solution().threeSum(A);

    // Print the results
    for (auto triplet : ans)
    {
        for (auto num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
