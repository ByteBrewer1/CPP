// Total Moves For Bishop!
/*
    Given the position of a Bishop (A, B) on an 8 * 8 chessboard.
    Your task is to count the total number of squares that can be visited by the Bishop in one move.
    The position of the Bishop is denoted using row and column number of the chessboard.
*/

int Solution::solve(int A, int B) {
    return min(B-1,A-1) + min(8-B,A-1) + min(8-B,8-A) + min(B-1,8-A);
}
