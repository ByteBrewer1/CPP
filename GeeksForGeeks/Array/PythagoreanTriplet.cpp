//! AUTHOR :: RAHUL MISTRY
//! DATE   :: 10 / 05 / 2023
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to check if the
    // Pythagorean triplet exists or not
    bool checkTriplet(int arr[], int n)
    {

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int num = arr[i] * arr[i];
            m[num]++;
        }

        for (int i = 0; i < n; i++)
        {
            int sum = pow(arr[i], 2);
            for (int j = i + 1; j < n; j++)
            {
                sum += pow(arr[j], 2);
                if (m.find(sum) != m.end())
                {
                    return true;
                }
                sum -= pow(arr[j], 2);
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}

// } Driver Code Ends