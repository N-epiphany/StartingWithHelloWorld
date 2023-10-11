class Solution {
  public: int strStr(string haystack, string needle) {
        //  Approach :
        //     check for substring in haystack
        //     discard condition where needle cant be present in haystack   
        if (needle.empty()) {
        return 0; // Empty needle is always found at index 0.
        }

        if (needle.length() > haystack.length()) {
        return -1; // Needle is longer than haystack, so it cannot be found.
        }
        // haystack.length() - needle.length() : Going beyond this point is unnecessary, as there won't be enough characters left in haystack to match needle
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
        if (haystack.substr(i, needle.length()) == needle) {
            return i; // Found a match, return the index.
        }
        }

        return -1; // Needle  not found in haystack.

  }
};