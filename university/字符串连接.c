#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[101], str2[101];
    while (scanf("%s%s", str1, str2) != EOF){
        printf("%s%s\n", str1, str2);
    }

    return 0;
}
