#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        int ans = 1;
        int sum1 = 0, sum2 = 0;
        for (i = 1; i <= n; ++i){
            ans *= i;
            if (i & 1){
                sum1 += ans;
            }else{
                sum2 += ans;
            }
        }
        printf("%d %d\n", sum1, sum2);
    }

    return 0;
}
