class Solution {
public:
    int trap(vector<int>& height) {
        //iterate through the vector use two pointers and subtract them 
        //if neg ignore
        // if positive add
        // int capacity=0;

        // for(int i=1;i<height.size();i++){
        //     int value=height[i-1]-height[i];
        //     if (value<0) continue;
        //     else if (value>0) capacity+=value;

        // }
        // return capacity;
        
    int n = height.size();
    if (n <= 2) return 0; // No water can be trapped with less than 3 bars

    int left = 0, right = n - 1; // Two pointers
    int left_max = 0, right_max = 0; // Initialize maximum heights for both sides
    int trappedWater = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] > left_max) {
                left_max = height[left];
            } else {
                trappedWater += left_max - height[left];
            }
            left++;
        } else {
            if (height[right] > right_max) {
                right_max = height[right];
            } else {
                trappedWater += right_max - height[right];
            }
            right--;
        }
    }

    return trappedWater;

    }
};