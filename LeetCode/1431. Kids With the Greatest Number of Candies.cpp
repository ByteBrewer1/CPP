class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Step 1 : Find maximum in candies
        int maxi = INT_MIN;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxi){
                maxi = candies[i];
            }
        }
        // Step 2 : Create a Bool array and check if sum is greater than or equal to maxi or not
        // Initialize with false
        vector<bool> result(candies.size(), false);
        for(int i = 0; i < candies.size(); i++){
            int sum = candies[i] + extraCandies;
            if(sum >= maxi){
                result[i] = true;
            }
        }
        return result;
    }
};
