class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Aprroach : Iterate over both the string 
                    // store the char at index i
                    // check if the char is present in map 
                    //     if not then save 
                    //     if yes check if char stored in t is same if false return false
                    // do same for TtoS 
        if (s.length() != t.length()) {
        return false; // if length is not sam ethen they can not be isomorphic
    }

    unordered_map<char, char> sToT; //Map from S toT
    unordered_map<char, char> tToS; //Map from  T to S

    for (int i = 0; i < s.length(); i++) {
        char charS = s[i];//storing char at each index
        char charT = t[i];

        if (sToT.find(charS) != sToT.end()) {
            if (sToT[charS] != charT) {
                return false; //char found in map but mapped to another char 
            }
        } else {
            sToT[charS] = charT;
        }
        //repeating for T to S
        if (tToS.find(charT) != tToS.end()) {
            if (tToS[charT] != charS) {
                return false;
            }
        } else {
            tToS[charT] = charS;
        }
    }

    return true;
    }
};