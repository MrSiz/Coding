class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> arr;
        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        int length = s.size();
        int ans = 0;
        for (int i = 0; i < length; ++i){
            if (i != 0){
                if (arr[s[i - 1]] < arr[s[i]])
                    ans = ans - 2 * arr[s[i - 1]] + arr[s[i]];
                else
                    ans += arr[s[i]];
                continue;
            }
            ans += arr[s[i]];
        }
        return ans;
    }
};