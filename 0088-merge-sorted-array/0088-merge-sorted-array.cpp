class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1; // Last index of nums1's initial elements
    int j = n - 1; // Last index of nums2
    int k = m + n - 1; // Last index of nums1 (final merged array)

    // Merge nums1 and nums2 starting from the back
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // Copy remaining elements of nums2, if any
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    }
};