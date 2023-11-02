class Solution {
  public: int lengthOfLongestSubstring(string s) {
    //applying sliding window approach with hashmap to keep a track of char and their index 
    //iterating through the string 
    // For each char : 
    // 	If char present in map and start index <= char’s index in map then 
    // Update start index to index of last char occurrence (sliding window moves to new start point)
    // Else update maxLength from start to current index
    // Update map with current char index

    unordered_map < char, int > charIndex; // To store the most recent index of each character
    int maxLength = 0; // max length of substring
    int start = 0; //starting index of sliding window

    for (int end = 0; end < s.length(); end++) {
      if (charIndex.find(s[end]) != charIndex.end() && start <= charIndex[s[end]]) {
        start = charIndex[s[end]] + 1;
      } else {
        maxLength = max(maxLength, end - start + 1);
      }
      charIndex[s[end]] = end;
    }

    return maxLength;
  }
};