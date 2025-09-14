class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        result.reserve(n);

        for(int i =0 ; i < n; i++){
           result.push_back(candies[i] + extraCandies >= maxCandies);
        
        }
        return result;
    }
};