#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int flag[7];
char ans[7];

int cmp(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

void solve(char* str, int num, int pos)
{
    int i;
    if (num == pos){
        printf("%s", ans);
        puts("");
        return ;
    }
    for (i = 0; i < num; ++i){
        if (flag[i] == 0){
            ans[pos] = str[i];
            flag[i] = 1;
            solve(str, num, pos + 1);
            flag[i] = 0;
        }
    }
    return ;
}

int main()
{
    char str[7];
    while (scanf("%s", str) != EOF){
        int num = strlen(str);
        memset(flag, 0, sizeof(flag));
        qsort(str, num, sizeof(char), cmp);
        solve(str, num, 0);
        puts("");
    }
    return 0;
}
