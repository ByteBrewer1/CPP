void nextGreaterPermutation(vector<int>& arr) {
    int n = arr.size();
    
    // find the index of the first element which is smaller than its next element
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    
    // if no such element is found, reverse the entire array and return
    if (i < 0) {
        reverse(arr.begin(), arr.end());
        return;
    }
    
    // find the index of the smallest element to the right of i that is greater than arr[i]
    int j = n - 1;
    while (j >= 0 && arr[j] <= arr[i]) {
        j--;
    }
    
    // swap arr[i] and arr[j]
    swap(arr[i], arr[j]);
    
    // reverse the elements to the right of i
    reverse(arr.begin() + i + 1, arr.end());
}
