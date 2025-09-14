// class Solution {
// public:
//     bool isVowel(char c) {
//         c = tolower(c);
//         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
//     }

//     string reverseVowels(string s) {
//         int left = 0, right = s.size() - 1;

//         while (left < right) {
//             while (left < right && !isVowel(s[left])) left++;
//             while (left < right && !isVowel(s[right])) right--;

//             if (left < right) {
//                 swap(s[left], s[right]);
//                 left++;
//                 right--;
//             }
//         }
//         return s;
//     }
// };
class Solution {
public:

    bool isvowel(char c){
        c = tolower(c);
        return c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u';

    }
    string reverseVowels(string s) {
        int n = s.size();
        int left = 0 , right = n-1;
        while(left < right){
        while(left < right && !isvowel(s[left])) left++;
        while(left < right && !isvowel(s[right])) right--;

        if(left < right){
            swap(s[left],s[right]);
                left++;
                right--;   
        }
        }
         return s;
}
};