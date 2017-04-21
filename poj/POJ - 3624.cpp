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
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}
int dp[12885];
int w[3405];
int v[3405];

int main()
{
   // file();
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 1; i <= N; ++i){
        scanf("%d%d", &w[i], &v[i]);
    }
    for (int i = 1; i <= N; ++i){
        for (int k = M; k >= w[i]; --k){
            dp[k] = max(dp[k], dp[k - w[i]] + v[i]);
        }
    }
    printf("%d", dp[M]);
    return 0;
}
