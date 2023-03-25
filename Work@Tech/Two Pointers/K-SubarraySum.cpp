// AUTHOR :: RAHUL MISTRY
// DATE   :: 25/03/2023

vector<int> kSubarraySum(vector<int> &A, int k) {
	int n = A.size();
	vector<int> result(n - k + 1);
	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += A[i];
	}
	result[0] = sum;
	for (int i = k; i < n; i++) {
		sum += A[i] - A[i - k];
		result[i - k + 1] = sum;
	}
	return result;
}