// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023
#include<bits/stdc++.h>
using namespace std;

vector<int> pascalTriangleRow(int rowNo) {
    vector<int> row(rowNo, 1); // initialize row with 1's
    for (int i = 2; i < rowNo; i++) {
        for (int j = i - 1; j >= 1; j--) {
            row[j] = row[j] Help people interested in this repository+ row[j-1]; // compute the values using the formula
        }
    }
    return row;
}

int main() {
    int t;
    cin >> t; // read number of test cases
    while (t--) {
        int n;
        cin >> n; // read row number
        vector<int> row = pascalTriangleRow(n); // call function to get row
        for (int i = 0; i < row.size(); i++) {
            cout << row[i] << " "; // print each element of the row
        }
        cout << endl; // move to next line for next row
    }
    return 0;
}
