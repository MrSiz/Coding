#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        char str[100][1005];
        int i;
        for (i = 0; i < n; ++i){
            scanf("%s", str[i]);
        }
        for (i = 0; i < n; ++i){
            int j;
            for (j = n - 1; j > i; --j){
                if (strlen(str[j]) < strlen(str[i]) || (strlen(str[i]) == strlen(str[j]) && strcmp(str[j], str[i]) < 0)){
                    char a[1001];
                    strcpy(a, str[j]);
                    strcpy(str[j], str[i]);
                    strcpy(str[i], a);
//                    str[j] = str[i];
//                    str[i] = temp;
                }
            }
        }
        for (i = 0; i < n; ++i){
            printf("%s\n", str[i]);
        }
    }
    return 0;
}
