// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {
    vector<int> C;
    int i = 0, j = 0, k = 0;
    
    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) {
            C.push_back(A[i]);
            i++;
        } else {
            C.push_back(B[j]);
            j++;
        }
        k++;
    }
    while (i < A.size()) {
        C.push_back(A[i]);
        i++;
        k++;
    }
    while (j < B.size()) {
        C.push_back(B[j]);
        j++;
        k++;
    }
    return C;
}