
// AUTHOR :: RAHUL MISTRY
// DATE   :: 20/03/2023

#include<bits/stdc++.h>
using namespace std;

int diagonalDiff(vector<vector<int>> arr, int N);

int main(){
    int N;
    cin >> N;
    vector<vector<int>> matrix(N, vector<int>(N));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> matrix[i][j];
        }
    }
    cout << diagonalDiff(matrix, N) << endl;
    return 0;
}

int diagonalDiff(vector<vector<int>> arr, int N){
    int sum1 = 0;
    int sum2 = 0;
    int diff = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++){
            if(i == j){
                sum1 += arr[i][j];
            }
            if((i + j) == (N - 1)){
                sum2 += arr[i][j];
            }
        }
    }
    if(sum1 > sum2){
        return sum1-sum2;
    }
    else{
        return sum2 - sum1;
    }
}
