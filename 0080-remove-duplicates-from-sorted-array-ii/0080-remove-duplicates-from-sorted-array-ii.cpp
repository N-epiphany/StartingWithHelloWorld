class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //check for empty vector
            if (nums.empty()) {
            return 0;
            }

            int k = 1;  // for the case when we have just 1 element
            int count = 1;  // for counting the occurance of element

            for (int i = 1; i < nums.size(); ++i) {

            if (nums[i] == nums[i - 1]) {
                count += 1;
            } else {
                count = 1; //when we encounter new number revert back to 1 
            }

            if (count <= 2) {
                nums[k] = nums[i];
                k += 1;//copying simultaneously 
            }
        }

        return k;
    }
};