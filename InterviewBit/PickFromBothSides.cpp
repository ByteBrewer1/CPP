#include<bits/stdc++.h>
using namespace std;



int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int left = 0, right = 0, ans = INT_MIN;
    // calculate maximum sum for selecting elements from left
    for(int i=0; i<B; i++) {
        left += A[i];
    }
    ans = max(ans, left);
    
    // calculate maximum sum for selecting elements from right
    for(int i=0; i<B; i++) {
        right += A[n-i-1];
    }
    ans = max(ans, right);
    // calculate maximum sum for selecting elements from both ends
    for(int i=0; i<B; i++) {
        left -= A[B-i-1];
        left += A[n-i-1];
        ans = max(ans, left);
    }
    return ans;
}

int main(){
    vector<int> A = {1,2,3,4,5};
    cout << Solution().solve(A, 2) << endl;
    return 0;
}
