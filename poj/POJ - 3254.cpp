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
const int MOD = 100000000;
int maz[15];
int cla[1000];
int M, N;
int cnt;
void func(int n)
{
    for (int i = 0; i < n; ++i){
        if (!(i & (i << 1))){
            cla[cnt++] = i;
        }
    }
    return ;
}

int dp[15][1000];

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int M, N;
    while (cin >> N >> M){
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < N; ++i){
            maz[i] = 0;
            for (int j = 0; j < M; ++j){
                int t;
                cin >> t;
                if (!t) maz[i] |= 1 << (M - j - 1);
            }
        }
        cnt = 0;
        func(1 << M);
        for (int j = 0; j < cnt; ++j){
            if (!(cla[j] & maz[0])){
                dp[0][cla[j]] = 1;
              //  cout << 1 << endl;
            }
//                prln(cla[j]);
        }
        for (int i = 1; i < N; ++i){
            for (int j = 0; j < cnt; ++j){
                prln(maz[i]);
                if (cla[j] & maz[i]) continue;
                pr("ss");prln(cla[j]);
                for (int k = 0; k < cnt; ++k){
                    if (cla[k] & maz[i - 1]) continue;
                    if (cla[j] & cla[k]) continue;
//                    if (cla[j] & (cla[k] >> 1)) continue;
                    pr(cla[k]);prln(cla[j]);
                    prln(dp[i - 1][cla[k]]);
                    dp[i][cla[j]] = (dp[i - 1][cla[k]] + dp[i][cla[j]]) % MOD;
                    pr(i);pr(cla[j]);prln(dp[i][cla[j]]);
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < cnt; ++i){
            sum = (sum + dp[N - 1][cla[i]]) % MOD;
        }
        cout << sum << endl;
    }
    return 0;
}