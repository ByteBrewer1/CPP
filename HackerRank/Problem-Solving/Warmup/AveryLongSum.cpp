// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023

#include<bits/stdc++.h>
using namespace std;


long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for (int i = 0; i < ar.size(); i++) {
        sum += ar[i];
        }
    return sum;
}


int main(){
    // Number of Array
    int n;
    cin >> n;
    // Created a Vector of Long for LargeSum
    vector<long> ar(n);
    // Scanning All the Elements of the Array
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    // Calling the Function
    long sum = aVeryBigSum(ar);
    // Printing the Result
    cout << sum << endl;
    return 0;
}