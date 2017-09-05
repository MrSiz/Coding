#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a0, a1, p, q, k;
    while (scanf("%d%d%d%d%d", &a0, &a1, &p, &q, &k) != EOF){
        int i;
        int val;
        for (i = 2; i <= k; ++i){
            val = (p * a1 + q * a0) % 10000;
//            int temp = val;
            a0 = a1;
            a1 = val;
        }
        if (k >= 2)
            printf("%d\n", val % 10000);
        else if (k == 1)
            printf("%d\n", a1);
        else
            printf("%d\n", a0);
    }
    return 0;
}
