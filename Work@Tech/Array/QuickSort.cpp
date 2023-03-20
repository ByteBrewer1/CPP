// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

#include<bits/stdc++.h>
using namespace std;
// This program implements the Quick Sort algorithm to sort an integer vector in ascending order

// The quickSort function recursively applies the partition function to sort the smaller sub-arrays
void quickSort(vector<int> &arr) {
    // base case
    if(arr.size() < 2){
        return;
    }
    
    // choose pivot
    int pivot = arr[arr.size()/2];
    
    // partition vector
    vector<int> left, right;
    for(auto val : arr){
        if(val < pivot){
            left.push_back(val);
        } else if(val > pivot){
            right.push_back(val);
        }
    }
    
    // recursively sort
    quickSort(left);
    quickSort(right);
    
    // concatenate sorted vectors
    arr.clear();
    arr.insert(arr.end(), left.begin(), left.end());
    arr.push_back(pivot);
    arr.insert(arr.end(), right.begin(), right.end());
}
// The printArray function is used to print the sorted array
void printArray(vector<int> &arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
// Sample inputs are provided to test the algorithm
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
// Written by Rahul Mistry on 19/03/2023