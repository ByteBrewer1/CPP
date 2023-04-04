// AUTHOR :: RAHUL MISTRY
// DATE   :: 04/03/2023

#include <iostream>
#include <vector>
using namespace std;

int getKthElement(vector<int> &firstArr, vector<int> &secondArr, int k)
{
    int n = firstArr.size();
    int m = secondArr.size();
    vector<int> mergedArr(n + m);
    int i = 0, j = 0, index = 0;
    while (i < n && j < m)
    {
        if (firstArr[i] <= secondArr[j])
        {
            mergedArr[index++] = firstArr[i++];
        }
        else
        {
            mergedArr[index++] = secondArr[j++];
        }
    }
    while (i < n)
    {
        mergedArr[index++] = firstArr[i++];
    }
    while (j < m)
    {
        mergedArr[index++] = secondArr[j++];
    }
    return mergedArr[k - 1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m;
        vector<int> firstArr(n), secondArr(m);
        for (int i = 0; i < n; i++)
        {
            cin >> firstArr[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> secondArr[i];
        }
        cin >> k;
        cout << getKthElement(firstArr, secondArr, k) << endl;
    }
    return 0;
}
