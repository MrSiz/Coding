#include <stdio.h>
#include <math.h>

int main()
{
    int node[1005];
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        for (i = 0; i < n; ++i){
            scanf("%d", &node[i]);
        }
        int k;
        scanf("%d", &k);
        int pos = (int)pow(2, k - 1);
        if (pos > n)
            printf("EMPTY\n");
        else{
            int ed = pow(2, k) - 1;
            if (ed > n)
                ed = n;
            for (i = pos - 1; i < ed - 1; ++i){
                printf("%d ", node[i]);
            }
            printf("%d\n", node[ed - 1]);
        }
    }
    return 0;
}
