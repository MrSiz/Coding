#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[101][101];
    while (scanf("%d",&n) != EOF){
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                scanf("%d", &arr[j][i]);
            }
        }
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                if (j == 0)
                    printf("%d", arr[i][j]);
                else
                    printf(" %d", arr[i][j]);
            }
            puts("");
        }
    }
    return 0;
}
