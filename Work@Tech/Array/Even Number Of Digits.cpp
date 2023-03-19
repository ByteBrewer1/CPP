// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023
#include <bits/stdc++.h>
using namespace std;

vector<int> getEvenDigitNumbers(vector<int> &arr) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        int digits = (int) log10(arr[i]) + 1;
        if (digits % 2 == 0) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> result = getEvenDigitNumbers(arr);
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
