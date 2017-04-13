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
const int MAXN = 1e6 + 5;
const int MODE = 1e9;
int dp[MAXN];
int main()
{
    int N;
    scanf("%d", &N);
    dp[1] = 1, dp[2] = 2;
    for (int i = 3; i <= N; ++i){
        if (i & 1){
            dp[i] = dp[i - 1];
        }else {
            dp[i] = (dp[i - 1] +dp[i >> 1]) % MODE;
        }
    }
    cout << dp[N] << endl;
    return 0;
}
