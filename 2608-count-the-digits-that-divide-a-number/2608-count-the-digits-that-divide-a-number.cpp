class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int div=0;
        int count=0;
        while(n>0){
            div=n%10;
            if(div!=0 && num%div==0) count++;
            n=n/10;
        }
        return count;
    }
};