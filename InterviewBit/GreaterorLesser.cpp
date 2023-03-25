// AUTHOR :: RAHUL MISTRY
// DATE   :: 24/03/2023

int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int countA=0;
    int countB=0;
    for(int i=0; i<A.size(); i++){
        if(A[i] > C){
            countA++;
        }
    }
    for(int i=0; i<B.size(); i++){
        if(B[i] < C){
            countB++;
        }
    }
    return max(countA, countB);
}

