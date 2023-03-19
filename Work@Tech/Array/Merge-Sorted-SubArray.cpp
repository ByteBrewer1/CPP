// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

void merge(vector<int>& arr, int endIndex) {
    int n = arr.size();
    vector<int> left, right;

    // copy sub-arrays into temp arrays
    for (int i = 0; i <= endIndex; i++) {
        left.push_back(arr[i]);
    }
    for (int j = endIndex+1; j < n; j++) {
        right.push_back(arr[j]);
    }

    int i = 0; // left counter
    int j = 0; // right counter
    int k = 0; // merged array counter

    // merge the temp arrays back to arr
    while (i <= endIndex && j < n-endIndex-1) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // copy remaining elements from left or right sub-arrays if any
    while (i <= endIndex) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n-endIndex-1) {
        arr[k] = right[j];
        j++;
        k++;
    }
}