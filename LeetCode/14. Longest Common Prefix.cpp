class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = strs.size();
        if (length == 0){
            return {};
        }else if (length == 1){
            return strs[0];
        }
        string ans;
        int n = strs[0].size();
        for (int i = 0; i < n; ++i){
            bool flag = true;
            for (int j = 1; j < length; ++j){
                if (strs[j][i] != strs[0][i]){
                    flag = false;
                    return ans;
                }
            }
            if (flag){
                ans.push_back(strs[0][i]);
            }
        }
        return ans;
    }
};