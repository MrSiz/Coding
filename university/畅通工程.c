#include <stdio.h>

int pa[1005];
int r[1005];

int findParent(int x)
{
    return x == pa[x] ? x : (pa[x] = findParent(pa[x]));
}

int main()
{
//    freopen("in.txt", "r", stdin);
    int n, m;
    while (scanf("%d", &n) != EOF && n){
        scanf("%d", &m);
        int from, to;
        int i;
        for (i = 1; i <= n; ++i){
            pa[i] = i;
            r[i] = 1;
        }
        for (i = 1; i <= m; ++i){
            scanf("%d%d", &from, &to);
            int a = findParent(from);
            int b = findParent(to);
            if (a == b)
                continue;
            else{
//                ans++;
                if (r[a] < r[b]){
                    pa[a] = b;
                    r[b]++;
                }else{
                    pa[b] = a;
                    r[a]++;
                }
            }
        }
        int ans = 0;
        for (i = 1; i <= n; ++i){
            if (pa[i] == i)
                ++ans;
        }
//        if (ans >= 1)
            printf("%d\n", ans - 1);
    }

    return 0;
}
