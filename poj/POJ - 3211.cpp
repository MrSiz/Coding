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
struct Node{
    char str[15];
    int num;
    int tot;
    int arr[105];
    Node()
    : num(0), tot(0) {};
}c[105];

int main()
{
    //freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    int m, n;
    while (~scanf("%d%d", &m, &n) && m != 0 && n != 0){
        char s[15];
        for (int i = 0; i < m; ++i){
            scanf("%s", c[i].str);
            c[i].num = 0;
            c[i].tot = 0;
        }
        int time;
        for (int i = 0; i < n; ++i){
            scanf("%d%s", &time, s);
            for (int j = 0; j < m; ++j){
                if (strcmp(s, c[j].str) == 0){
                    c[j].arr[c[j].num] = time;
                    c[j].tot += time;
                    c[j].num++;
                }
            }
        }
        int dp[500005];
        int ans = 0;
        for (int i = 0; i < m; ++i){
            memset(dp, 0, sizeof(dp));
            int t = c[i].tot / 2;
            int num = c[i].num;
            for (int j = 0; j < num; ++j){
                int time = c[i].arr[j];
                for (int k = t; k >= time; --k){
                    dp[k] = max(dp[k], dp[k - time] + time);
                }
            }
            ans += c[i].tot - dp[t];
        }
        cout << ans << endl;
    }
    return 0;
}
