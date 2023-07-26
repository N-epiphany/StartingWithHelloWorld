class Solution {
public:

    bool isPalindrome(int x) {

        int flag =0;
        int num=x;
        long check=0;
        int div=0;
        while(num>0){
            div = num %10;
            check=check*10+div;
            num=num/10;
        }
        return x==check;
        }
};