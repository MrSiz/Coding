//link:http://blog.csdn.net/chinaczy/article/details/5890768

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>


using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
int dis[12][12];
int dp[1 << 12][12];
int n, ans, _min;

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    while (scanf("%d", &n) && n){
        for (int i = 0; i <= n; ++i){
            for (int j = 0; j <= n; ++j){
                scanf("%d", &dis[i][j]);
            }
        }

        for (int k = 0; k <= n; ++k){
            for (int i = 0; i <= n; ++i){
                for (int j = 0; j <= n; ++j){
                    if (dis[i][k] + dis[k][j] < dis[i][j]){
                        dis[i][j] = dis[i][k] + dis[k][j];
                    }
                }
            }
        }
        for (int i = 1; i <= n; ++i)
            prln(dis[0][i]);
        for (int S = 0; S < (1 << (n + 1)); ++S){
            for (int i = 1; i <= n; ++i){
                if (S & (1 << (i))){
                    if (S == (1 << (i))){
                        dp[S][i] = dis[0][i];
                        pr(S);prln(dp[S][i]);
                    }
                    else{
                        dp[S][i] = INT_MAX;
                        for (int j = 1; j <= n; ++j){
                            if (i == j) continue;
                            if (!(S & (1 << (j)))) continue;
                            dp[S][i] = min(dp[S^(1 << i)][j] + dis[j][i], dp[S][i]);
                           pr(S);pr(i);prln(dp[S][i]);
                        }
                    }

                }
            }
        }
        int t = (1 << (n + 1)) - 2;
        ans = INT_MAX;
        prln(n);
        for (int i = 1; i <= n; ++i){
            prln(dp[t][i]);
            if (dp[t][i] != INF && dp[t][i] + dis[i][0] < ans){
                ans = dp[t][i] + dis[i][0];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
