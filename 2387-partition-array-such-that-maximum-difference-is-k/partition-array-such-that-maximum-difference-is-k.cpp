class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // Step 1: Sort the array
        int count = 0;
        int i = 0;
        int n = nums.size();

        while (i < n) {
            int start = nums[i]; // Start of new subsequence
            count++; // Increment subsequence count
            while (i < n && nums[i] - start <= k) {
                i++; // Keep adding to current subsequence
            }
        }

        return count;
    }
};
