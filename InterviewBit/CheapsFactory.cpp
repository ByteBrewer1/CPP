// AUTHOR :: RAHUL MISTRY
// DATE   :: 25/03/2023

vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int i=0, j=0;
    while(j < n){
        if(A[j] != 0){
            swap(A[i++], A[i]);
        }
        j++;
    }
    return A;
}
