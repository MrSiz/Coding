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

int cla[500];
int tot[500];
int cnt;
int maz[105];

int bit_count(int n)
{
    int res = 0;
    while (n){
        res += n & 1;
        n >>= 1;
    }
    return res;
}

void init(int n)
{
    cnt = 0;
    for (int i = 0; i < n; ++i){
        if ((i & (i << 1)) || (i & (i << 2))) continue;
        cla[cnt] = i;
        tot[cnt++] = bit_count(i);
    }
    return ;
}
int dp[105][300][300];

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int N, M;
    while (cin >> N >> M){
        getchar();
        memset(dp, 0, sizeof(dp));
        memset(tot, 0, sizeof(tot));
        memset(cla, 0, sizeof(cla));
        for (int i = 0; i < N; ++i){
            maz[i] = 0;
            for (int j = 0; j < M; ++j){
                char t;
                scanf("%c", &t);
//                cout << t;
                if (t == 'H'){
    //                prln(j);
                    maz[i] |= (1 << j);
                }
            }
            getchar();
    //        cout << endl;
        }
        getchar();
        init(1 << M);
    //    prln(maz[0]);
        for (int i = 0; i < cnt; ++i){
    //        prln(cla[i]);
            if (!(cla[i] & maz[0])){
                dp[0][cla[i]][0] = tot[i];
//                prln(tot[i]);
            }
        }
//        prln(dp[0][0][0]);
        for (int i = 0; i < cnt; ++i){
            if ((cla[i] & maz[1])) continue;
            for (int j = 0; j < cnt; ++j){
                if (cla[i] & cla[j]) continue;
                if (cla[j] & maz[0]) continue;
                dp[1][cla[i]][cla[j]] = dp[0][cla[j]][0] + tot[i];
    //            prln("sss");
            }
        }
//        prln(dp[0][0][0]);
        for (int i = 2; i < N; ++i){
            for (int j = 0; j < cnt; ++j){
                if (maz[i] & cla[j]) continue;
                for (int k = 0; k < cnt; ++k){
                    if (cla[k] & cla[j]) continue;
                    if (cla[k] & maz[i - 1]) continue;
                    for (int t = 0; t < cnt; ++t){
                        if (cla[k] & cla[t]) continue;
                        if (cla[j] & cla[t]) continue;
                        if (cla[t] & maz[i - 2]) continue;
                        dp[i][cla[j]][cla[k]] = max(dp[i][cla[j]][cla[k]], dp[i - 1][cla[k]][cla[t]] + tot[j]);
    //                    cout << "here" << endl;
                    }
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < cnt; ++i){
            for (int j = 0; j < cnt; ++j){
                if (sum < dp[N - 1][cla[i]][cla[j]]){
//                   pr(cla[i]);pr(cla[j]);prln(dp[N - 1][cla[i]][cla[j]]);
                    sum = dp[N - 1][cla[i]][cla[j]];
//                    prln(sum);
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
