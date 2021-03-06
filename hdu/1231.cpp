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

const int MAXN = 10005;

void file()
{
    freopen("in.txt", "r", stdin);
}
int arr[MAXN];
int dp[MAXN];

int main()
{
    //file();
    int N;
    while (~scanf("%d", &N) && N != 0){
        for (int j = 1; j <= N; ++j){
            scanf("%d", &arr[j]);
        }
        int ans = INT_MIN;
        memset(dp, 0, sizeof(dp));
        int end_index = -1, st_index = -1;
        int t = 1;
        bool flag = false;
        for (int j = 1; j <= N; ++j){
            if (arr[j] >= 0)
                flag = true;
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
        //prln(arr[0]);
        if (flag)
            printf("%d %d %d\n", ans, arr[st_index], arr[end_index]);
        else{
            printf("%d %d %d\n", 0, arr[1], arr[N]);
        }
       // memset(arr, 0, sizeof(arr));
//prln("Sdfs");
    }
    return 0;
}
