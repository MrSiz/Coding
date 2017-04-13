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
int arr[355][355];
int dp[355][355];

int main()
{
    //file();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= i; ++j){
            scanf("%d", &arr[i][j]);
        }
    }
    memset(dp, 0, sizeof(dp));
    //dp[1][1] = arr[1][1];
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= i; ++j){
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
        }
    }
//    for (int i = 1; i <= n; ++i){
//        for (int j = 1; j <= i; ++j){
//            cout << dp[i][j] << ' ';
//        }
//        cout << endl;
//    }
    int ans = -1;
    for (int i = 1; i <=n; ++i){
        if (dp[n][i] > ans){
            ans = dp[n][i];
        }
    }
    cout << ans << endl;
    return 0;
}
