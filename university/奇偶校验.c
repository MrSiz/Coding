#include <stdio.h>
#include <string.h>


char ans[8];

void help(int val)
{
    int index = 0, cnt = 0;
    while (val){
        ans[index] = val % 2;
        val >>= 1;
        if (ans[index] == 1)
            cnt++;
        ++index;
    }
    if ((cnt & 1) == 0)
        ans[7] = 1;
    return ;
}

int main()
{
    char str[101];
    while (scanf("%s", str) != EOF){
        int length = strlen(str);
        int i;
        for (i = 0; i < length; ++i){
            int val = str[i];
//            printf("%d\n", val);
            memset(ans, 0, sizeof ans);
            help(val);
            int j = 7;
            while (j >= 0){
                printf("%d", ans[j]);
                --j;
            }
            printf("\n");
        }
    }
    return 0;
}
