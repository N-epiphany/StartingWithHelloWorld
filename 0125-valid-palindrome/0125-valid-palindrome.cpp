class Solution {
public:
    bool isPalindrome(string s) {
        string s2;
          transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char c : s){
        if( isdigit(c) || isalpha(c)){
            s2.push_back(c);
        }
    }

    int size = s2.size();
int j=size-1;
    for(int i=0 ; i<size/2 ; i++){
        if (s2[i]!=s2[j]){
            return false;           
        }
        j--;

    }
   return true; 
    }
};