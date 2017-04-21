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

const int MAXN = 100005;

void file()
{
    freopen("in.txt", "r", stdin);
}
int arr[MAXN];
int dp[MAXN];

int main()
{
    //file();
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; ++i){
        int N;
        scanf("%d", &N);
        for (int j = 1; j <= N; ++j){
            scanf("%d", &arr[j]);
        }
        int ans = INT_MIN;
        int end_index = -1, st_index = -1;
        int t = 1;
        for (int j = 1; j <= N; ++j){
            //dp[j] = dp[j - 1] + arr[j] > 0 ? max(arr[j], dp[j - 1] + arr[j]) : arr[j];
            if (arr[j] > dp[j - 1] + arr[j]){
                dp[j] = arr[j];
                t = j;
            }else {
                dp[j] = dp[j - 1] + arr[j];
            }
            if (dp[j] > ans){
                ans = dp[j];
                end_index = j;
                st_index = t;
            }
        }
        printf("Case %d:\n%d %d %d\n", i, ans, st_index, end_index);
        if (i != T){
            puts("");
        }
    }
    return 0;
}
