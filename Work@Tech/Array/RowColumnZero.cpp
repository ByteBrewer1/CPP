// AUTHOR :: RAHUL MISTRY
// DATE   :: 21/03/2023


void setRowColumnZeroes(vector<vector<int> > &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Create two boolean arrays to keep track of which rows and columns have 0s
    bool rowHasZero[rows] = {false};
    bool colHasZero[cols] = {false};

    // Traverse the matrix and mark which rows and columns have 0s
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowHasZero[i] = true;
                colHasZero[j] = true;
            }
        }
    }

    // Set all the elements in the marked rows and columns to 0
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (rowHasZero[i] || colHasZero[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}
