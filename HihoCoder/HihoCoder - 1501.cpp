#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i){
        string str;
        cin >> str;
        int length = str.size();
        bool flag = true;
        for (int i = 0; i < length; ++i){
            if (str[i] == '_'){
                flag = false;
            }
        }
        if (!flag){
            string res;
            for (int i = 0; i < length; ++i){
                if (str[i] != '_'){
                    res += str[i];
                }else {
                    ++i;
                    res += toupper(str[i]);
                }
            }
            cout << res << endl;
        }else {
            string res;
            for (int i = 0; i < length; ++i){
                if (str[i] >= 'a' && str[i] <= 'z'){
                    res += str[i];
                }else {
                    //prln(str[i]);
                    res.push_back('_');
                    res += tolower(str[i]);
                    //cout << res << endl;
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}
