class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);

        // Get maximum value by replacing the first non-9 digit with 9
        string maxStr = s;
        for (char c : s) {
            if (c != '9') {
                for (char &ch : maxStr) {
                    if (ch == c) ch = '9';
                }
                break;
            }
        }

        // Get minimum value by replacing the first non-0 digit with 0
        string minStr = s;
        for (char c : s) {
            if (c != '0') {
                for (char &ch : minStr) {
                    if (ch == c) ch = '0';
                }
                break;
            }
        }

        int maxVal = stoi(maxStr);
        int minVal = stoi(minStr);

        return maxVal - minVal;
    }
};
