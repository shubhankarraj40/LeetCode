class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int value : nums){
            int freq = 0;
            for(int el: nums){
                if(value == el){
                   freq++;
                }
            }
                if(freq > n/2){
                    return value;
            }
        }
        return -1;
    }

};