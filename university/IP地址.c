#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[50];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%s", str);
        int length = strlen(str);
        int sum = 0;
        short flag = 1;
        for (int i = 0; i < length; ++i){
            if (isdigit(str[i])){
                sum *= 10;
                sum += str[i] - '0';
            }else if (str[i] == '.'){
                if (sum > 255){
                    flag = 0;
                    break;
                }
                sum = 0;
            }
        }
        if (sum > 255)
            flag = 0;
        if (flag){
            printf("Yes!\n");
        }else{
            printf("No!\n");
        }
    }
    return 0;
}
