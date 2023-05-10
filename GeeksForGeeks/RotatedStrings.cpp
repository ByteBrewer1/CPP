//! AUTHOR :: RAHUL MISTRY
//! DATE   :: 09/05/2023
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1, string s2)
    {
        // Your code here
        int n1 = s1.length();
        int n2 = s2.length();
        if (n1 != n2)
            return false;
        string s = s1 + s1;
        if (s.find(s2) != string::npos)
            return true;
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
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends