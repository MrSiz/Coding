//link: http://blog.csdn.net/libin56842/article/details/24533599

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;

#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
int map[20][20],dis[20][20],dp[1<<11][20];

int main()
{
    freopen("in.txt", "r", stdin);
    int n,i,j,k;
    while(~scanf("%d",&n),n)
    {
        for(i = 0; i<=n; i++)
            for(j = 0; j<=n; j++)
            {
                scanf("%d",&map[i][j]);
                dis[i][j] = map[i][j];
            }
        for(j = 0; j<=n; j++)
            for(i = 0; i<=n; i++)
                for(k = 0; k<=n; k++)
                    if(dis[i][j]>dis[i][k]+map[k][j])
                        dis[i][j] = dis[i][k]+map[k][j];
        memset(dp,-1,sizeof(dp));
        dp[1][0] = 0;
        for(i = 1; i<1<<(n+1); i++)
        {
            i = i|1;
            for(j = 0; j<=n; j++)
            {
                if(dp[i][j]!=-1)
                {
                    for(k = 0; k<=n; k++)
                    {
                        if (i == 15)
                            pr("zz");pr(j);prln(dp[15][j]);
                        int t = (1 << k) | i;
                        if (!t) continue;
                        if(j!=k && (dp[(1<<k)|i][k]==-1 || dp[(1<<k)|i][k]>dp[i][j]+dis[j][k])){
                            dp[(1<<k)|i][k]=dp[i][j]+dis[j][k];
                            pr(i);prln(j);
                            pr(t);prln(k);prln(dp[t][k]);}
                    }
                }
            }
        }
        for (int i = 0; i <= n; ++i)
            prln(dp[15][i]);
        printf("%d\n",dp[(1<<(n+1))-1][0]);
        prln(dp[15][3]);
    }

    return 0;
}
