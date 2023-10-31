class Solution {
public:
    int compress(vector<char>& chars) {
        //Approach: index: Tracks the position in the modified array
// Iterate through the characters
// Count consecutive characters until a change is seen.
// Place the current character at the current index.
// If the character count > 1, convert the count to a string and add each digit as a separate character in the array.

         int index = 0; // Index to track the position in the modified array
    int i = 0; 
    while (i < chars.size()) {
        char curr = chars[i]; //currentChar
        int count = 0;
        // count consecutive characters
        while (i < chars.size() && chars[i] == curr) {
            ++i;
            ++count;
        }

        chars[index++] = curr; // place the char

        // if count is more than 1 or exactly 1 update the array 
        if (count > 1) {
        string countStr = to_string(count);
            for (char c : countStr) {
                chars[index++] = c; // place the count characters
            }
        }
    }

    return index; // return the new length of the array
    }
};