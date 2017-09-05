#include <stdio.h>

int ans[10000];

int main()
{

    int n;
    while (scanf("%d", &n) != EOF){
        int i, j;
        int index = 0;
        ans[0] = 1;
        for (i = 1; i <= n; ++i){
            int carry = 0;
            for (j = 0; j <= index; ++j){
                ans[j] = ans[j] * i + carry;
                carry = ans[j] / 10000;
                ans[j] %= 10000;
            }
            if (carry){
                ++index;
                ans[index] = carry;
            }
        }
        printf("%d", ans[index--]);
        for (i = index; i >= 0; --i){
            printf("%04d", ans[i]);
        }
        puts("");
    }
    return 0;
}
