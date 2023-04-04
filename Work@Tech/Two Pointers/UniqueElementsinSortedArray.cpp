#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &A);
};

int Solution::removeDuplicates(vector<int> &A)
{
    int n = A.size();
    if (n <= 1)
        return n;

    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i] != A[j])
        {
            j++;
            A[j] = A[i];
        }
    }
    return j + 1;
}

int main()
{
    vector<int> A = {1, 1, 1, 2};
    Solution s;
    cout << s.removeDuplicates(A) << endl;
    return 0;
}