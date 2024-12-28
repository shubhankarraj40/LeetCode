#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sums(n - k + 1, 0); // Store the sum of each subarray of length k

        // Calculate subarray sums
        int sum = accumulate(nums.begin(), nums.begin() + k, 0);
        sums[0] = sum;
        for (int i = 1; i <= n - k; ++i) {
            sum += nums[i + k - 1] - nums[i - 1];
            sums[i] = sum;
        }

        // Find the best subarray on the left of each index
        vector<int> left(n - k + 1, 0);
        int best = 0;
        for (int i = 0; i <= n - k; ++i) {
            if (sums[i] > sums[best]) {
                best = i;
            }
            left[i] = best;
        }

        // Find the best subarray on the right of each index
        vector<int> right(n - k + 1, 0);
        best = n - k;
        for (int i = n - k; i >= 0; --i) {
            if (sums[i] >= sums[best]) {
                best = i;
            }
            right[i] = best;
        }

        // Find the three indices that maximize the sum
        vector<int> result(3, 0);
        int maxSum = 0;
        for (int i = k; i <= n - 2 * k; ++i) {
            int leftIdx = left[i - k];
            int rightIdx = right[i + k];
            int totalSum = sums[leftIdx] + sums[i] + sums[rightIdx];
            if (totalSum > maxSum) {
                maxSum = totalSum;
                result = {leftIdx, i, rightIdx};
            }
        }

        return result;
    }
};
