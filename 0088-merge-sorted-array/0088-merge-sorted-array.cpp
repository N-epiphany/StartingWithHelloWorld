class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> nums1_copy(nums1.begin(), nums1.begin() + m);
        
        int i = 0, j = 0, k = 0;
        
        // Merge nums1_copy and nums2 back into nums1
        while (i < m && j < n) {
            if (nums1_copy[i] <= nums2[j]) {
                nums1[k++] = nums1_copy[i++];
            } else {
                nums1[k++] = nums2[j++];
            }
        }
        
        // If there are remaining elements in nums2, add them to nums1
        while (j < n) {
            nums1[k++] = nums2[j++];
        }
        
        // If there are remaining elements in nums1_copy, add them to nums1
        while (i < m) {
            nums1[k++] = nums1_copy[i++];
        }
    }
};