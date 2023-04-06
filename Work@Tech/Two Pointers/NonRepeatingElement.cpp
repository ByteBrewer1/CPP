// AUTHOR :: RAHUL MISTRY
// DATE   :: 06/04/2023

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

int findNonRepeatingElement(vector<int> &arr) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is at an even index and the next element is the same
        if (mid % 2 == 0 && arr[mid] == arr[mid + 1]) {
            low = mid + 2; // The non-repeating element is on the right side
        }
        // Check if mid is at an odd index and the previous element is the same
        else if (mid % 2 == 1 && arr[mid] == arr[mid - 1]) {
            low = mid + 1; // The non-repeating element is on the right side
        }
        else {
            high = mid - 1; // The non-repeating element is on the left side
        }
    }

    return arr[low];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int nonRepeatingElement = findNonRepeatingElement(arr);
        cout << nonRepeatingElement << endl;
    }

    return 0;
}
