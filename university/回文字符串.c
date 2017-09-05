#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1005];
    while (scanf("%s", str) != EOF){
        int length = strlen(str);
        int i;
        int flag = 1;
        int temp = length - 1;
        length >>= 1;
        for (i = 0; i < length; ++i){
            if (str[i] != str[temp - i]){
                flag = 0;
                break;
            }
        }
        if (flag){
            printf("Yes!\n");
        }else{
            printf("No!\n");
        }
    }

    return 0;
}
