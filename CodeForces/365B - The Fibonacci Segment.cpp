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
const int MAXN = 1e5 + 5;
int arr[MAXN];
int dp[MAXN];

int main()
{
    file();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    dp[1] = dp[2] = 1;
    bool flag = false;
    for (int i = 3; i <= n; ++i){
        if (flag == false && arr[i] == arr[i - 1] + arr[i - 2]){
            dp[i] = 3;
            flag = true;
        }else if (flag && arr[i] == arr[i - 1] + arr[i - 2]){
            dp[i] = dp[i - 1] + 1;
        }else{
            flag = false;
        }
    }
    int ans = INT_MIN;
    for (int i = 1; i <= n; ++i){
        if (ans < dp[i])
            ans = dp[i];
    }
    if (ans == 1 && n > 1)
        cout << ans + 1 << endl;
    else
        printf("%d\n", ans);
    return 0;
}
