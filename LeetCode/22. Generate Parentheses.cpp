class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        help(ans, "", n, 0);
        return ans;
    }
    void help(vector<string>& temp, string str, int l, int r){
        if (l == 0 && r == 0){
            temp.push_back(str);
            return ;
        }
       // cout << str << endl;
        if (r > 0){
            help(temp, str + ")", l, r - 1);
        }
        if (l > 0){
            help(temp, str + "(", l - 1, r + 1);
        }
        return ;
    }
};