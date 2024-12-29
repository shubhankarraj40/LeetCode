class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanToIntMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            // If the current character has a smaller value than the next one, subtract it
            if (i < n - 1 && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
                result -= romanToIntMap[s[i]];
            } else {
                result += romanToIntMap[s[i]];
            }
        }

        return result;
    }
};