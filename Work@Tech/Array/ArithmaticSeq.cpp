// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023

bool isArithmeticSequence(vector<int> &arr) {
    if (arr.size() < 2) {
        // An arithmetic sequence must have at least two elements.
        return false;
    }

    // Sort the array in ascending order.
    sort(arr.begin(), arr.end());

    // Calculate the common difference.
    int diff = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); i++) {
        if (arr[i] - arr[i-1] != diff) {
            // The array does not form an arithmetic sequence.
            return false;
        }
    }

    // The array forms an arithmetic sequence.
    return true;
}
