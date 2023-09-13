class Solution {
public:
    void rotate(vector<int>& nums, int k ) {
        int size = nums.size();
        vector<int> temp(size); 
        for (int i = 0; i < size; i++) {
            int newPosition = (i + k) % size; 
            temp[newPosition] = nums[i]; 
        }

        nums = temp;

            }
};