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
            a[n + i] = a[i];
        }

        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= 2 * n; ++i){
            dp[i][i] = 1;
        }

        for (int len = 1; len < 2 * n; ++len){
            for (int i = 1; i + len <= 2 * n; ++i){
                int j = i + len;
                if (a[i] == a[j])
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                dp[i][j] = max(dp[i][j], max(dp[i + 1][j], dp[i][j - 1]));
            }
        }

        int ans = 0;
        for (int i = 1;i <= n; ++i){
            ans = max(ans, dp[i][i + n - 1]);
            ans = max(ans, dp[i][i + n - 2] + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
