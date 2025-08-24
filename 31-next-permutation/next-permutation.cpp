class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int ind = -1;

        // Step 1: Find the first index from right where nums[i] < nums[i+1]
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        if (ind == -1) {
            // If no such index found, array is descending → smallest permutation
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find element just greater than nums[ind] from right
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 3: Reverse the part after index 'ind'
        reverse(nums.begin() + ind + 1, nums.end());
    }
};
