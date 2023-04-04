// AUTHOR :: RAHUL MISTRY
// DATE   :: 03/04/2023
// Merge Two Sorted Lists II
void Solution::merge(vector<int> &A, vector<int> &B)
{
    int m = A.size();
    int n = B.size();
    int i = 0;
    int j = 0;
    vector<int> res;

    while (i < m && j < n)
    {
        if (A[i] <= B[j])
        {
            res.push_back(A[i]);
            i++;
        }
        else
        {
            res.push_back(B[j]);
            j++;
        }
    }

    while (i < m)
    {
        res.push_back(A[i]);
        i++;
    }

    while (j < n)
    {
        res.push_back(B[j]);
        j++;
    }

    A = res;
}
