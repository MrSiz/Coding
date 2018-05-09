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
const int MAXN = 50005;
int arr[MAXN];
double val[MAXN];
double dp[MAXN];
int main()
{
    //file();
    int T,N;
    double P;
    scanf("%d", &T);
    for (int i = 1; i <= T; ++i){
        scanf("%lf%d", &P, &N);
        int sum = 0;
        for (int j = 0; j < N; ++j){
            scanf("%d%lf", &arr[j], &val[j]);
            sum += arr[j];
        }
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 0; i < N; ++i){
            for (int k = sum; k >= arr[i]; --k){
                dp[k] = max(dp[k], dp[k - arr[i]] * (1 - val[i]));
            }
        }
        for (int i = sum; i >= 0; --i){
            if (dp[i] > (1- P)){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}