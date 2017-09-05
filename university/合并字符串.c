#include <stdio.h>
#include <string.h>

char str1[101];
char str2[101];

int main()
{
    while (scanf("%s%s", str1, str2) != EOF){
        int length = strlen(str1);
        int i;
        for (i = 0; i < length; ++i){
            printf("%c%c", str1[i], str2[length - 1 - i]);
        }
        puts("");
    }
    return 0;
}
