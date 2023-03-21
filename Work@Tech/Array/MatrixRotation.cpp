// AUTHOR :: RAHUL MISTRY
// DATE   :: 21/03/2023

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > rotateMatrix(vector<vector<int> > &matrix){
    int n = matrix.size();
    vector<vector<int>> rotatedMatrix(n, vector<int>(n, 0)); // create a new matrix to store the rotated elements
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            rotatedMatrix[j][n-i-1] = matrix[i][j]; // rotate the elements by swapping rows and columns
        }
    }
    return rotatedMatrix;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> rotatedMatrix = rotateMatrix(matrix);
    for(int i=0; i<rotatedMatrix.size(); i++){
        for(int j=0; j<rotatedMatrix[i].size(); j++){
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    matrix = {{1, 2}, {3, 4}, {5, 6}};
    rotatedMatrix = rotateMatrix(matrix);
    for(int i=0; i<rotatedMatrix.size(); i++){
        for(int j=0; j<rotatedMatrix[i].size(); j++){
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
