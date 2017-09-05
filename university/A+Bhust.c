#include <string.h>
#include <stdio.h>
#include <string.h>

int solve(char* str)
{
    int sum = 0;
    int length = strlen(str);
    int i;
    for (i = 0; i < length; ++i){
        if (str[i] == ',' || str[i] =='-')
            continue;
        else
            sum = sum * 10 + (str[i] - '0');
    }
    if (str[0] == '-')
        return -sum;
    return sum;
}

int main()
{
    char str1[15], str2[15];
    while (scanf("%s%s", str1, str2) != EOF){
        printf("%d\n", solve(str1) + solve(str2));
    }

    return 0;
}
