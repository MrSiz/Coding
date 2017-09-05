#include <stdio.h>
#include <limits.h>
#define MAXN 1000005

int arr[MAXN];
int dp[MAXN];

int main()
{

    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        int maxVal = INT_MIN;
        for (i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n; ++i){
            if (arr[i] + dp[i] < 0){
                dp[i + 1] = 0;
            }else{
                dp[i + 1] = arr[i] + dp[i];
            }
            if (dp[i + 1] > maxVal)
                maxVal = dp[i + 1];
        }
        printf("%d\n", maxVal);
    }

    return 0;
}
