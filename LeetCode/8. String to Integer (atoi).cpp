class Solution {
public:
    int myAtoi(string str) {
        long long ans = 0;
        bool flag = true;
        int length = str.size();
        int i = 0;
        int cnt = 0;
        while (str[i] == ' ')
            ++i;
        if (str[i] == '-'){
             flag = false;
             ++i;
        }else if (str[i] == '+'){
            ++i;
        }
        //cout << i << endl;
        while (isdigit(str[i])){
            ans *= 10;
            ans = ans - ((str[i] - '0') % 10);
            //cout << ans << endl;
            if (flag == false && ans <= INT_MIN)
                return INT_MIN;
            else if (flag == true && -ans >= INT_MAX)
                return INT_MAX;
            ++i;
        }
        //cout << ans << endl;
        if (flag == false)
            return ans;
        return  -ans;
    }
};