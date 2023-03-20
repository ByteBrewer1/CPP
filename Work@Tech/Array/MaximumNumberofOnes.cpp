// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

#include<bits/stdc++.h>
using namespace std;

int getMaxConsecutiveOnes(vector<int> &A) {
    int max_ones = 0;
    int ones_count = 0;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == 1) {
            ones_count++;
            } else {
                if (ones_count > max_ones) {
                    max_ones = ones_count;
                    }
                    ones_count = 0;
                }
    }
    if (ones_count > max_ones) {
        max_ones = ones_count;
    }
    ones_count = 0;
    return max_ones;
}