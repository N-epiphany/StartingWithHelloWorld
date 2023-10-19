class Solution {
  public: int jump(vector < int > & nums) {

    //Approach: Iterate through the array, updating farthest with the maximum reachable index.
    // When we reach currentEnd, increment jumps and update currentEnd with farthest.
    // Break the loop - if currentEnd reaches the last index.
    // Return the jumps count as the minimum number of jumps needed to reach the end.
      
    int n = nums.size();
    int jumps = 0; // Number of jumps made so far
    int currentEnd = 0; // The current end of the reachable area
    int farthest = 0; // The farthest index that can be reached

    for (int i = 0; i < n - 1; i++) {
      farthest = std::max(farthest, i + nums[i]);

      if (i == currentEnd) {
        jumps++;
        currentEnd = farthest;

        if (currentEnd >= n - 1) {
          break; // If we can reach the last index, no need to continue
        }
      }
    }

    return jumps;
  }
};