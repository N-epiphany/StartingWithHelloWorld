class Solution {
  public: int lengthOfLastWord(string s) {

    //    approach 
    //    start from the end 
    //    skip spaces 
    //    count from the till you see another space

    int count = 0;
    int i = s.size() - 1;

    while (i >= 0 && s[i] == ' ') {
      // Skip spaces
      i--;
    }

    while (i >= 0 && s[i] != ' ') {
      // Count the characters of the last word
      count++;
      i--;
    }

    return count;

  }
};