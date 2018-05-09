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
int v[1005], w[1005];
int dp[1005];

int main()
{
    //file();
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; ++i){
        int N, V;
        memset(dp, 0, sizeof(dp));
        scanf("%d%d", &N, &V);
        for (int i = 1; i <= N; ++i){
            scanf("%d", &v[i]);
        }
        for (int i = 1; i <= N; ++i){
            scanf("%d", &w[i]);
        }
        for (int i = 1; i <= N; ++i){
            for (int j = V; j >= w[i]; --j){
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        printf("%d\n", dp[V]);
    }
    return 0;
}