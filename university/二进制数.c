#include <stdio.h>

char ans[11];

int main()
{
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d", &n);
        int index = 0;
        while (n){
            ans[index++] = (n % 2) + '0';
            n >>= 1;
        }
        int i;
        for (i = index - 1; i >= 0; --i){
            printf("%c", ans[i]);
        }
        puts("");
    }

    return 0;
}
