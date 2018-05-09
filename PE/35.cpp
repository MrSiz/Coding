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
const int MAXN = 1e6 + 1;
bool p[MAXN];

void init()
{
    p[0]= p[1] = 1;
    for (int i = 2; i < MAXN; ++i){
        if (p[i] == 0){
            for (int j = i + i; j < MAXN; j += i){
                p[j] = 1;
            }
        }
    }
}

int help(int n)
{
    int cnt = 0;
    while (n){
        ++cnt;
        n /= 10;
    }
    return cnt;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
//    cout <<help(10) << endl;
//    string test = "abc";
    int ans = 0;
    init();
//    cout << string(test.substr(0, 0) + test.substr(0));
    for (int i = 2; i < MAXN; ++i){
        int len = help(i);
        string temp = to_string(i);
        bool flag = true;
        for (int j = 0; j < len; ++j){
            string t = temp.substr(j) + temp.substr(0, j);
            int val = atoi(t.c_str());
            prln(val);
            prln(p[val]);
            if (p[val] != 0){
                cout << "val = " << val << endl;
                flag = false;
                break;
            }
        }
        if (flag){
            cout << i << endl;
            ++ans;
        }
        prln(i) << endl;
    }
    cout << "fff" << endl;
    cout << ans << endl;
    return 0;
}

