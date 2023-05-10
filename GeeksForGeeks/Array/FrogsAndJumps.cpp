//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int unvisitedLeaves(int N, int leaves, int frogs[])
    {
        // Code here
        //! Step 1 : Create an empty map to keep track of visited leaves
        map<int, int> m;
        //! Step 2 : Initilize count variable to keep track of unvisited leaves
        int count = 0;
        //! Step 3 : Iterate through the array of frog strengths
        for (int i = 0; i < N; i++)
        {
            //! Step 4 : Get the position of frog
            int pos = frogs[i];
            //! Step 5 : If the frog is already counted skip it
            if (m[pos] == 1)
                continue;
            //! Step 6 : Mark all leaves that has been visited by frogs
            while (pos <= leaves)
            {
                m[pos] = 1;
                pos += frogs[i];
            }
        }
        //! Step 7 : Count the unvisited leaves
        for (int i = 1; i < leaves; i++)
        {
            if (m[i] == 0)
                count++;
        }
        //! Step 8 : Return the count
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++)
        {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends