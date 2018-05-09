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
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

const int MAXN = 2005;
int dp[MAXN][MAXN];
int a[MAXN];
int n;

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    while (scanf("%d", &n) && n){
        for (int i = 1; i <= n; ++i){
            scanf("%d", &a[i]);
        }

        memset(dp, 0, sizeof(dp));

        for (int i = 1;i <= n; ++i)
            dp[i][i] = 1;

        for (int len = 1; len < n; ++len){
            for (int i = 1; i + len <= n; ++i){
                int j = i + len;
                dp[i][j] = max(dp[i + 1][j], max(dp[i][j - 1], (a[i] == a[j] ? dp[i + 1][j - 1] + 2 : 0)));
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; ++i){
            ans = max(ans, dp[1][i] + dp[i + 1][n]);
        }
        cout << ans << endl;
    }
    return 0;
}
