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

int n, arr[105], sum[105], dp[105][105];

int main()
{
    #ifdef LOCAL
        //freopen("in.txt", "r", stdin);
    #endif // LOCAL

    int t, i, j, k, l, cas = 1;
    cin >> t;
    while (t--){
//        prln(t);
        scanf("%d", &n);
        memset(sum, 0, sizeof(sum));
//        prln(n);
        for (i = 1; i <= n; ++i){
            scanf("%d", &arr[i]);
            sum[i] = sum[i - 1] + arr[i];
//            prln(sum[i]);
        }

        memset(dp, 0, sizeof(dp));

        for (i = 1; i <= n; ++i){
            for (j = i + 1; j <= n; ++j){
                dp[i][j] = INF;
            }
        }

        for (l = 1; l < n; ++l){
            for (i = 1; i + l <= n; ++i){
                j = i + l;
                int t = j - i + 1;
                for (k = 1; k <= t; ++k){
                    dp[i][j] = min(dp[i][j],dp[i+1][i+k-1]+dp[i+k][j]+k*(sum[j]-sum[i+k-1])+arr[i]*(k-1));
					//后面部分时重新的dp，所以要加上k * (sum)这部分
				}
            }
        }
        printf("Case #%d: %d\n", cas++, dp[1][n]);
    }

    return 0;
}
