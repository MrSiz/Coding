#include <stdio.h>
#include <math.h>

#define MAXN 110
#define INF 0x3f3f3f3f
int a[MAXN], dp[MAXN];

int min(int a, int b)
{
    return a < b ? a : b;
}


int main()
{
    int n, m;
    while (scanf("%d%d", &m, &n) != EOF){
        int i;
        for (i = 0; i < MAXN; ++i)
            dp[i] = INF;
        for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        dp[0] = 0;
        int j;
        for (i = 0; i < n; ++i){
            for (j = m; j >= a[i]; --j)
                dp[j] = min(dp[j], dp[j - a[i]] + 1);
        }
        if (dp[m] == INF)
            printf("0\n");
        else
            printf("%d\n", dp[m]);
    }
    return 0;
}
