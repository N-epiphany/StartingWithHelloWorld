class Solution {
public:
    void rotate(vector<int>& nums, int k ) {
        int size = nums.size();
        vector<int> temp(size); 
        for (int i = 0; i < size; i++) {
            int newPosition = (i + k) % size; //to stay in the coundary of the array 
            temp[newPosition] = nums[i]; //shifting elements k times towards right 
        }
        nums = temp;
        }
};