// AUTHOR :: RAHUL MISTRY
// DATE   :: 00/00/2023

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

// Given a sorted array and a number key, find the index of the first and last occurrence of the key in the array. If the key is not present, return[-1, -1]
vector<int> searchRange(vector<int> &arr, int key)
{ // return first and last occurance if not found return -1 , -1
    int first = -1;
    int last = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            first = i;
            break;
        }
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] == key)
        {
            last = i;
            break;
        }
    }
    return {first, last};
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int num_elements;
    cin >> num_elements;
    // Creating a Vector
    vi arr(num_elements);
    for (int i = 0; i < num_elements; i++)
    {
        cin >> arr[i];
    }
    // Taking input
    int key;
    cin >> key;
    vector<int> result = searchRange(arr, key);
    // Printing Array
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}