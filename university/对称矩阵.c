#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int arr[101][101];
        int i, j;
        for (i = 0; i < n; ++i){
            for (j = 0; j < n; ++j){
                scanf("%d", &arr[i][j]);
            }
        }
        int flag = 1;
        for (i = 0; i < n; ++i){
            for (j = 0; j < i; ++j){
                if (arr[i][j] != arr[j][i]){
                    flag = 0;
                    break;
                }
            }
            if (!flag)
                break;
        }
        if (flag)
            printf("Yes!\n");
        else
            printf("No!\n");
    }
    return 0;
}
