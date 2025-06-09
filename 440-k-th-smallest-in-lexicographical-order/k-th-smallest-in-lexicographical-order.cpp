class Solution {
public:
    int findKthNumber(int n, int k) {
        auto countSteps = [&](long long n, long long curr, long long next) {
            long long steps = 0;
            while (curr <= n) {
                steps += min(n + 1LL, next) - curr;
                curr *= 10;
                next *= 10;
            }
            return steps;
        };

        int curr = 1;
        k -= 1;
        while (k > 0) {
            long long steps = countSteps(n, curr, curr + 1);
            if (steps <= k) {
                curr += 1;
                k -= steps;
            } else {
                curr *= 10;
                k -= 1;
            }
        }
        return curr;
    }
};
