//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
    int binarysearch(vector<int> &arr, int n)
    {
        int s = 0, e = n - 1;
        int ans = -1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (arr[mid] == 1)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }

public:
    int rowWithMax1s(vector<vector<int>> &arr, int n, int m)
    {
        int ans = -1;
        int maxi = -1;
        for (int i = 0; i < n; i++)
        {
            int index = binarysearch(arr[i], m);
            if (index != -1 && m - index > maxi)
            {
                maxi = m - index;
                ans = i;
            }
        }
        return ans;
    }
};
//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends