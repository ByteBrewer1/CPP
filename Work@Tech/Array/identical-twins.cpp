// AUTHOR :: RAHUL MISTRY
// DATE   :: 19/03/2023

int getIdenticalTwinsCount(vector<int> &arr) {
    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (freq[arr[i]] > 0) {
            count += freq[arr[i]];
        }
        freq[arr[i]]++;
    }
    return count;
}