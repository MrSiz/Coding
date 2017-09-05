#include <stdio.h>
#include <limits.h>



int main()
{
    int arr[101][101];
    int m, n;
    while (scanf("%d%d", &m, &n) != EOF){
        int i, j;
        for (i = 0; i <  m; ++i){
            for (j = 0; j < n; ++j){
                scanf("%d", &arr[i][j]);
            }
        }
        for (i = 0; i < m; ++i){
            int index = -1;
            int maxVal = INT_MIN, sum = 0;
            for (j = 0; j < n; ++j){
                if (arr[i][j] > maxVal){
                    maxVal = arr[i][j];
                    index = j;
                }
                sum += arr[i][j];
            }
            arr[i][index] = sum;
        }
        for (i = 0; i < m; ++i){
            for (j = 0; j < n; ++j){
                if (j != n - 1)
                    printf("%d ", arr[i][j]);
                else
                    printf("%d\n", arr[i][j]);
            }
//            puts("");
        }
    }
    return 0;
}
