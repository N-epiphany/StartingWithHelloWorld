class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Approach: iterates through the characters of the first string and compare them with the corresponding characters in the other strings
        // return the common prefix when a mismatch is found.
       
    if (strs.empty()) {
        return "";
    }

    for (int i = 0; i < strs[0].length(); ++i) {
        char curr = strs[0][i]; // Get the current character from the first string.

        for (int j = 1; j < strs.size(); ++j) {
             //  if we reached the end of the current string or if there is a character mismatch return the common prefix so far
           
            if (i >= strs[j].length() || strs[j][i] != curr) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0]; //If no mismatch was found, return the first string as the common prefix.
}
//later on try minlength wala approach too

    
};