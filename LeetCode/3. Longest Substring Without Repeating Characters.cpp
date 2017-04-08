class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        #define prin(x) //(cout << #x << ' ' << x << endl)
        unordered_map<char, int> u_m;
        int length = s.size();
        int j = 0;
        int res = 0;
        for (int i = 0; i < length && j < length; ++i){
            while (j < length){
                if (u_m[s[j]] == 0){
                    u_m[s[j]]++;
                    ++j;
                }
                else{
                    break;
                }
            }
            if (res < j - i){
                res = j - i;
                prin(j);
                prin(i);
                prin(res);
            }
            u_m[s[i]]--;
        }
        return res;
    }
};