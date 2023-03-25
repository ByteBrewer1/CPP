// AUTHOR :: RAHUL MISTRY
// DATE   :: 25/03/2023
bool hasTwoSumZero(vector<int> &A) {
    int left = 0, right = A.size() - 1;
    while (left <= right) {
        int sum = A[left] + A[right];
        if (sum == 0) {
            return true;
        } else if (sum > 0) {
            right--;
        } else {
            left++;
        }
    }
    return false;
}
