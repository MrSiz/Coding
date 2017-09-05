#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        int temp;
        int sum1 = 0, sum2 = 0;
        for (i = 0; i < n; ++i){
            scanf("%d", &temp);
            if (temp & 1)
                ++sum1;
            else
                ++sum2;
        }
        if (sum1 >= sum2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
