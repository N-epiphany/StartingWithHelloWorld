class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> RomanValue={      
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result =0; //contains final value
        int prev=0; // to check if we have to subtract or add

        //iterating in reverse
        for(int i = s.size() - 1; i >= 0; --i){
            char curr=s[i];
            int value =RomanValue[curr];

            if(value<prev){
                result-=value;
            }
            else{
                result+=value;
            }
            prev=value;

        }
        return result;
    }
};