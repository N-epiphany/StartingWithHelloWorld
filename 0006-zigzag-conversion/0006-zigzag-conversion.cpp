class Solution {
  public: string convert(string s, int numRows) {
  
    // Approach
    // create an array of strings each representing a row in the pattern
    // then iterating through the characters of the input string, placing each character in the appropriate row.
    // concatenate the rows to form the final result.
    if (numRows == 1 || numRows >= s.length()) {
      return s;
    }

    vector < string > rows(min(numRows, int(s.length())));
    int currRow = 0;
    bool direction = false; // decides where the char will be

    for (char c: s) {
      rows[currRow] += c; //add character 'c' to the current row in the 'rows' vector
      if (currRow == 0 || currRow == numRows - 1) { //check if we are at the top row or the bottom row to change the direction
        direction = !direction;
      }
      currRow += direction ? 1 : -1; //track of which row the next character should be added to.
    }

    string result;
    //concatenate the rows
    for (string row: rows) {
      result += row;
    }

    return result;
  }
};