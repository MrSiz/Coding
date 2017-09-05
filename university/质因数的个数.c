#include <stdio.h>

int prime[34000];
int fac[6000];

int main()
{
    int i, cnt = 0;
    for (i = 2; i < 34000; ++i){
        if (prime[i])
            continue;
        int j;
        fac[cnt++] = i;
        for (j = i * i; j < 34000; j += i)
            prime[j] = 1;
    }
    int n;
    while (scanf("%d", &n) != EOF){
        int k, ans = 0;
        for (k = 0; k < cnt; ++k){
            //printf("%d\n", fac[k]);
            if (n < fac[k])
                break;
            while (n % fac[k] == 0){
                n /= fac[k];
//                printf("%d\n", n);
                ans++;
            }

        }
        if (n != 1)
            ++ans;
        printf("%d\n", ans);

    }
    return 0;
}
