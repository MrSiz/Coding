class Solution {
public:
    string intToRoman(int num) {
        int arr[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5,4, 1};
        string str[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int i = 0;
        string ans;
        while (num){
            int t = num / arr[i];
            num %= arr[i];
            while (t--){
                ans += str[i];
            }
            ++i;
        }
        return ans;
    }
};