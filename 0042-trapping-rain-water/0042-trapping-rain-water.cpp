class Solution {
  public: int trap(vector < int > & height) {
    //iterate through the vector use two pointers run from both end
    //check which side is higher from there we can check water trapped
    //set max value of left and right bars 
    //subtract to see how much water is trapped

    int n = height.size();
    if (n <= 2) return 0; // No water can be trapped with less than 3 bars

    int left = 0, right = n - 1; // Two pointers
    int left_max = 0, right_max = 0;
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