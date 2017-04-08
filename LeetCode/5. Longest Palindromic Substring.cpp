class Solution {
public:
    string longestPalindrome(string s) {
        string str = "$#";
        for (auto& elem : s){
            str = str + elem + "#";
        }
        int num[2005];
        memset(num, 0 , sizeof(num));
        int id = 0, mx = 0;
        int length = str.size();
        for (int i = 1; i < length; ++i){
            if (mx < i){
                num[i] = 1;
            }else{
                num[i] = min(num[2 * id - i], mx - i);
            }
            while (str[i + num[i]] == str[i - num[i]]){
                num[i]++;
            }
            if (num[i] + i > mx){
                mx = num[i] + i;
                id = i;
            }
        }
        int max_length = 0;
        for (int i = 0; i < length; ++i){
            if (num[i] > max_length){
                max_length = num[i];
                id = i;
            }
        }
       // cout << str << endl;
        return s.substr((id - max_length) / 2, max_length - 1);
    }
};