// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023


bool isArithmeticSequence(vector<int> &arr) {
    int n = arr.size();
    // default case
    if (n < 2)
    return true;
    // check for arithmetic sequence
    // check if the first element is the same as the last element
    if (arr[0] == arr[n-1])
        return true;
    
    
    // Sort The Array First and Then Check The Difference
    sort(arr.begin(), arr.end());

    int diff1 = arr[1] - arr[0];
    int diff2 = arr[n-1] - arr[n-2];

    if(diff1 == diff2) return true;
    else{
        return false;
    }
}