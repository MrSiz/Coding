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
    string str;
    cin >> str;
    int length = str.size();
    int i = 0;
    bool flag = true;
    while (i < length){
        if (str[i] == '1'){
            if (i + 1 < length && str[i + 1] == '1'){
                ++i;
                continue;
            }else if (i + 1 < length && str[i + 1] == '4' && i + 2 < length && str[i + 2] == '4'){
                i += 3;
                continue;
            }else if (i + 1 < length && str[i + 1] == '4'){
                i += 2;
                continue;
            }
            ++i;
        }else{
            flag = false;
            break;
        }
    }
    if (flag){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
