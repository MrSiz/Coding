link: http://xxx0624.iteye.com/blog/2186889
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
#include <unordered_map>
#include <unordered_set>

using namespace std;
typedef long long ll;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, s, t) for (int i = (s); i <= (t); ++i)


int maz[170], f[170], cnt[170];
int dp[2][170][170];
int len;

bool ok(int x)
{
    if (x & (x << 2))
        return false;
    return true;
}

int co(int x)
{
    int res = 0;
    while (x > 0){
        res += (x & 1);
        x >>= 1;
    }
    return res;
}

void fun(int m)
{
    REP(i, (1 << m)){
        if (ok(i)){
            f[len] = i;
            cnt[len++] = co(i);
        }
    }
    return ;
}


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, m;
    while (~scanf("%d%d", &n, &m)){
        memset(dp, -1, sizeof(dp));
        memset(f, 0, sizeof(f));
        REP(i, n){
            maz[i] = 0;
            REP(j, m){
                int x;
                scanf("%d", &x);
                if (!x) maz[i] |= (1 << j);
            }
        }

        int now = 1;
        len = 0;
        fun(m);
        REP(i, len) if (!(f[i] & maz[0])) dp[now][i][0] = cnt[i];

        FOR(i, 1, n - 1){
            now ^= 1;
            REP(a, len){
                if (maz[i] & f[a])
                    continue;
                REP(b, len){
                    if (f[a] & (f[b] << 1)) continue;
                    if (f[a] & (f[b] >> 1)) continue;
                    int tmp = 0;
                    REP(c, len){
                        if (f[b]& (f[c] << 1)) continue;
                        if (f[b] & (f[c] >> 1)) continue;
                        if (f[a] & f[c]) continue;
                        if (dp[now^1][b][c] == -1) continue;
                        dp[now][a][b] = max(dp[now][a][b], dp[now ^1][b][c] + cnt[a]);
                    }
                }
            }
        }
        int ans = 0;
        REP(i, len)REP(j, len) ans = max(ans, dp[now][i][j]);
        printf("%d\n", ans);
    }
    return 0;
}
