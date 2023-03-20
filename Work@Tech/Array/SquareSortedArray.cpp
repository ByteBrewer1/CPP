// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

vector<int> getSquareSortedArray(vector<int> &arr) {
    vector<int> ans;
	
	for(int i=0; i < arr.size(); i++){
		int sq = arr[i] * arr[i];
		ans.push_back(sq);
	}
	
	sort(ans.begin(), ans.end());
	return ans;
}