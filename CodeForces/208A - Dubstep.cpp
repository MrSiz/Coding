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

int main()
{
    //file();
    string str;
    cin >> str;
    int length = str.size();
    int i = 0;
    string res;
    while (i < length){
        if (i < length && str[i] == 'W' && i + 1 < length
            && str[i + 1] == 'U' && i + 2 < length && str[i + 2] == 'B'){
                i += 3;
                res.push_back(' ');
                continue;
            }
        res.push_back(str[i]);
        ++i;
    }
    int l = res.size();
    i = 0;
    while (i < l){
        if (i == 0 && res[i] == ' '){
            ++i;continue;
        }
        else if (res[i] != ' ')
            cout << res[i], ++i;
        else if (res[i] == ' '){
            int j = i + 1;
            while (j < length && res[j] == ' '){
                ++j;
            }
            cout << res[i];
            i = j;
        }
    }
    return 0;
}
