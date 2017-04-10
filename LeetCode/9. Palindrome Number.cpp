class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        int ans = 0;
        while (x > ans){
            ans *= 10;
            ans += x % 10;
            x /= 10;
        }
        if (x == ans || ans / 10 == x)
            return true;
        return false;
    }
};