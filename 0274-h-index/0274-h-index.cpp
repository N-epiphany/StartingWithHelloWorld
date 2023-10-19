class Solution {
  public: int hIndex(vector < int > & citations) {

    // APPROACH : 
    // Sort the citations in descending order.This ensures that papers with the                highest number of citations are considered first.
    // Iterate through the sorted array and check if the current citation count is            greater than or equal to the current index + 1.
    // Update the h-index when the condition is met.
    // Break the loop when the condition is no longer met.
    // Return the calculated h-index.

    sort(citations.rbegin(), citations.rend());

    int h = 0;
    for (int i = 0; i < citations.size(); ++i) {
      if (citations[i] >= i + 1) {
        h = i + 1;
      } else {
        break;
      }
    }
    return h;
  }
};