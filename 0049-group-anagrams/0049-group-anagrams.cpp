class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Aprroach :

        //         iterate over the vector
        //             sort each string 
        //             push back in the anagram group by sort
        //             Convert the dictionary values into a list, GETTING the desired groups of anagrams.
         unordered_map<string, vector<string>> anagramGroups;

    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end()); // Sort the characters in the string.
        anagramGroups[sortedStr].push_back(str); // Group anagrams by the sorted string.
    }
    // After processing all input strings, the dictionary contains anagram groups.


    vector<vector<string>> result;
    for (const auto& group : anagramGroups) {
        result.push_back(group.second);
    }

    return result;
    }
};