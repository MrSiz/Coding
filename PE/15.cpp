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
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

ll dp[25][25];


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    for (int i = 0; i < 25; ++i){
        dp[0][i] = 1;
        dp[i][0] = 1;
    }
    dp[0][0] = 0;
    for (int i = 1; i <= 20; ++i){
        for (int j = 1; j <= 20; ++j){
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            cout << dp[i][j] <<' ';
        }
//        cout << endl;
    }
//    prln(dp[2][2]);
    for (int i = 0; i <= 5; ++i){
        for (int j = 0; j <= 5; ++j){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    cout << dp[20][20] << endl;
    return 0;
}
