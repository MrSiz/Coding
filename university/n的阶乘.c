#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        long long ans = 1;
        for (i = 1; i <= n; ++i){
            ans *= i;
        }
        printf("%lld\n", ans);
    }

    return 0;
}
