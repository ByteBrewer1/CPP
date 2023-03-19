// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	vector<int> cumSum(arr.size());
	vector<int> posSum;
    cumSum[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        cumSum[i] = cumSum[i-1] + arr[i];
    }
	
	for(int j=0; j < arr.size(); j++){
		
		if(cumSum[j] > 0){
			posSum.push_back(cumSum[j]);
		}
	}
	return posSum;
	}
