class Solution {
  public: bool canJump(vector < int > & nums) {
    // Approach:
    //     iterate through the loop 
    //      set maxjump as max of i+nums[i] or the prev value : for cases such as 0
    //         if max jump goes beyond n-1 the return true
    //         if max jump reach n-1 the return true
    //         if end of loop is reached return 0
    int maxJump = 0;
    int i = 0;

    while (i < nums.size() && i <= maxJump) {
      maxJump = max(maxJump, i + nums[i]);
      if (maxJump >= nums.size() - 1) {
        return true;
      }
      i++;
    }

    return false;
  }
};