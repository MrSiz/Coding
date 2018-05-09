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
const int MAXN = 105;
char buf[MAXN];
int dp[MAXN][MAXN];

bool match(int i, int j)
{
    if (buf[i] == '(' && buf[j] == ')')
        return true;
    if (buf[i] == '[' && buf[j] == ']')
        return true;
    return false;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    while (gets(buf)){
        if (strcmp("end", buf) == 0)
            break;
        memset(dp, 0, sizeof(dp));
        int ans = 0;
        int sz = strlen(buf);
        for (int len = 1; len < sz; ++len){
            for (int i = 0; i + len < sz; ++i){
                int j = i + len;
                if (j - i == 1 && match(i, j))
                    dp[i][j] = 2;
                 if (match(i, j))
                    dp[i][j] = max(dp[i][j], dp[i + 1][j - 1] + 2);
                for (int k = i; k < j; ++k){
                    dp[i][j] = max(dp[i][j], dp[i][k] + dp[k + 1][j]);
                }
                pr(i);pr(j);prln(dp[i][j]);
            }
        }
        cout << dp[0][sz - 1] << endl;
    }
    return 0;
}
