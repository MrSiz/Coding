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
const int maxn = 1e3 + 5;
const double eps = 1e-8;

struct node
{
    int x, v;
}a[maxn];

ll sum[maxn];
ll dp[maxn][maxn][2];

bool cmp(node a, node b)
{
    return a.x < b.x;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, st, v;
    while (scanf("%d%d%d", &n, &v, &st) != EOF){
        for (int i = 1; i <= n; ++i){
            scanf("%d%d", &a[i].x, &a[i].v);
        }
        a[n + 1].x = st;
        a[n + 1].v = 0;
        sort(a + 1, a + n + 2, cmp);
        sum[0] = 0;

        for (int i = 1; i <= n + 1; ++i){
            sum[i] = sum[i - 1] + a[i].v;
        }

        int pos = 0;

        for (int i = 1; i <= n + 1 && !pos; ++i)
            if (a[i].x == st) pos = i;

        memset(dp, INF, sizeof(dp));

        dp[pos][pos][0] = dp[pos][pos][1] = 0;

        for (int i = pos; i >= 1; --i){
            for (int j = pos; j <= n + 1; ++j){
                if (i == j) continue;
                ll now = sum[i - 1] + sum[n + 1] - sum[j];
                dp[i][j][0] = min(dp[i][j][0], dp[i + 1][j][0] + (a[i + 1].x - a[i].x) * (now + a[i].v));
                dp[i][j][0] = min(dp[i][j][0], dp[i + 1][j][1] + (a[j].x - a[i].x) * (now + a[i].v));
                dp[i][j][1] = min(dp[i][j][1], dp[i][j - 1][0] + (a[j].x - a[i].x) * (now + a[j].v));
                dp[i][j][1] = min(dp[i][j][1], dp[i][j - 1][1] + (a[j].x - a[j - 1].x) * (now + a[j].v));
            }
        }
        cout << v * min(dp[1][n + 1][0], dp[1][n + 1][1]) << endl;
    }
    return 0;
}