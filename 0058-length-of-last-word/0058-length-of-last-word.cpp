class Solution {
  public: int lengthOfLastWord(string s) {

    //    approach 
    //    start from the end 
    //    skip spaces 
    //    count from the till you see another space
    // point : sinces its a string of spaces as well so there can be multiple space so     writing a condition in do-while loop wont work where there are two spaces at the end like in Example 2: Input: s = "   fly me   to   the moon  "

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