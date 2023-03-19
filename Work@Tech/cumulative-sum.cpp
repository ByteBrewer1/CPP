// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

vector<int> getCumulativeSum(vector<int> &arr) {
    vector<int> cumSum(arr.size());
    cumSum[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        cumSum[i] = cumSum[i-1] + arr[i];
    }

    return cumSum;
}



// #include <bits/stdc++.h>
// using namespace std;

// vector<int> getCumulativeSum(vector<int> &arr) {
//     vector<int> cumSum(arr.size());
//     cumSum[0] = arr[0];

//     for (int i = 1; i < arr.size(); i++) {
//         cumSum[i] = cumSum[i-1] + arr[i];
//     }

//     return cumSum;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         vector<int> cumSum = getCumulativeSum(arr);

//         for (int i = 0; i < n; i++) {
//             cout << cumSum[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
