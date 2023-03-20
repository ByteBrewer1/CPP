// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023

#include <iostream>
#include <vector>
using namespace std;

// !Largest Contiguous Sum;

int largestContiguousSum(vector<int>& arr) {
    int max_sum = arr[0]; // initialize maximum sum
    int curr_sum = arr[0]; // initialize current sum
    
    for (int i = 1; i < arr.size(); i++) {
        // check if adding the current element to the current sum
        // would increase or decrease the sum
        curr_sum = max(arr[i], curr_sum + arr[i]);
        
        // update the maximum sum if the current sum is greater
        if (curr_sum > max_sum) {
            max_sum = curr_sum;
        }
    }
    
    return max_sum;
}

// TODO: Some Test Cases 
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << largestContiguousSum(arr) << endl; // output: 15
    
    arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << largestContiguousSum(arr) << endl; // output: 6
    
    return 0;
}
