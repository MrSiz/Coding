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
    constexpr int MODE = 1000000007;
    int ans = 0;
    int cnt_b = 0;
    for (int i = length - 1; i >= 0; --i){
        if (str[i] == 'b'){
            ++cnt_b;
        }else if (str[i] == 'a'){
            ans = (ans + cnt_b) % MODE;
            cnt_b = (cnt_b * 2) % MODE;
        }
    }
    printf("%d\n", ans);
    return 0;
}
