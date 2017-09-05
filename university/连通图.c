#include <stdio.h>

int pa[1005];
int r[1005];
int n, m;

void init()
{
    int i;
    for (i = 1; i <= n; ++i){
        pa[i] = i;
        r[i] = 1;
    }
    return ;
}

int findParent(int x)
{
    return pa[x] == x ? x : (pa[x] = findParent(pa[x]));
}

int main()
{
    while (scanf("%d%d", &n, &m) != EOF){
        if (n == 0 && m == 0)
            break;
        init();
        int i;
        int f, t;
        for (i = 1; i <= m; ++i){
            scanf("%d%d", &f, &t);
            int a = findParent(f);
            int b = findParent(t);
//            printf("%d %d\n", a, b);
            if (a != b){
                if (r[a] < r[b]){
                    pa[a] = b;
                    r[b]++;
                }else{
                    pa[b] = a;
                    r[a]++;
                }
            }
        }
        int cnt = 0;
        for (i = 1; i <= n; ++i){
            if (pa[i] == i)
                ++cnt;
            if (cnt > 1)
                break;
        }
//        printf("%d\n", cnt);
        if (cnt > 1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
