#include <stdio.h>
#include <string.h>

int main()
{
    char str[105];
    while (scanf("%s", str) != EOF){
        int arr[256][101];
        memset(arr, 0, sizeof arr);
        int pos[256];
        int flag[256];
        memset(pos, 0, sizeof pos);
        memset(flag, 0, sizeof flag);
        int length = strlen(str);
        int i;
        for (i = 0;i < length; ++i){
            arr[str[i]][pos[str[i]]++] = i;
        }
        for (i = 0; i < length; ++i){
            int j;
            if (flag[str[i]] == 1)
                continue;
            int temp = pos[str[i]];
            if (temp <= 1)
                continue;
            for (j = 0; j < temp; ++j){
                if (j != temp - 1)
                    printf("%c:%d,", str[i], arr[str[i]][j]);
                else
                    printf("%c:%d\n", str[i], arr[str[i]][j]);
            }
            flag[str[i]] = 1;
        }
    }
    return 0;
}
