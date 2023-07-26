class Solution {
public:
    int reverse(int x) {
        int newx = 0;
        while (x != 0) {
            int digit = x % 10;
            // Check for potential overflow
            if (newx > INT_MAX / 10 || (newx == INT_MAX / 10 && digit > 7)) {
                return 0; // Return 0 on overflow
            }
            if (newx < INT_MIN / 10 || (newx == INT_MIN / 10 && digit < -8)) {
                return 0; // Return 0 on overflow
            }
            newx = newx * 10 + digit;
            x = x / 10;
        }
        return newx;
    }
};