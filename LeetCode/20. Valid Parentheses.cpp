class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (const auto& elem : s){
            if (elem == '{' || elem == '(' || elem == '['){
                st.push(elem);
            }else {
                if (elem == '}' && !st.empty()){
                    char temp = st.top();
                    st.pop();
                    if (temp != '{'){
                        return false;
                    }
                }else if (elem == ')' && !st.empty()){
                    char temp = st.top();
                    st.pop();
                    if (temp != '('){
                        return false;
                    }
                }else if (elem == ']'&& !st.empty()){
                    char temp = st.top();
                    st.pop();
                    if (temp != '['){
                        return false;
                    }
                }else {
                    st.push(elem);
                }
            }
        }
        return st.empty() == true ? true : false;
    }
};