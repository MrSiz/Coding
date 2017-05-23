#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

inline bool judge(const char& ch){
    if (ch == 'a' || ch == 'A' || ch == 'o' ||
        ch == 'O' || ch == 'y' || ch == 'Y' ||
        ch == 'E' || ch == 'e' || ch == 'U' ||
        ch == 'u' || ch == 'I' || ch == 'i')
            return true;
    return false;
}

int main()
{
    string str;
    string res;
    cin >> str;
    int i = 0;
    int length = str.size();
    while (i < length){
        if (judge(str[i])){
            ++i;
        }else{
            res.push_back('.');
            res.push_back(tolower(str[i]));
            ++i;
        }
    }
    cout << res << endl;
    return 0;
}
