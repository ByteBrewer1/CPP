#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &A);
};

int Solution::removeDuplicates(vector<int> &A)
{
    int i = 0; // Erasing approach
    int len = A.size();
    while (i < A.size())
    {
        int j = i + 1;
        if (A[i] == A[j])
        {
            ++j;
            while (A[i] == A[j] && j < len)
                ++j;
            --j;
            len -= (j - 1 - i);
            A.erase(A.begin() + i + 1, A.begin() + j);
        }
        ++i;
    }
    return len;
    int count = 0; // Just moving duplicates at back of vector approach, faster;
    int size = A.size();
    for (auto i = 0; i < size; ++i)
    {
        if (i < size - 2 && A[i] == A[i + 1] && A[i] == A[i + 2])
            continue;
        else
            A[count++] = A[i];
    }
    return count;
}

int main()
{
    vector<int> A = {1, 1, 1, 2};
    Solution s;
    cout << s.removeDuplicates(A) << endl;
    return 0;
}