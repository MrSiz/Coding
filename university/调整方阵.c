#include <stdio.h>
#include <limits.h>

int arr[11][11];

void swap(int* a, int* b, int n)
{
    int i;
    for (i = 0; i < n; ++i){
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    return ;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i, j;
        for (i = 0; i < n; ++i){
            for (j = 0; j < n; ++j){
                scanf("%d", &arr[i][j]);
            }
        }
        for (j = 0; j < n; ++j){
            int maxVal = INT_MIN;
            int index = -1;
            for (i = j; i < n; ++i){
                if (maxVal < arr[i][j]){
                    maxVal = arr[i][j];
                    index = i;
                }
            }
            swap(arr[j], arr[index], n);
        }
        for (i = 0; i < n; ++i){
            for (j = 0; j < n; ++j){
                if (j != n - 1)
                    printf("%d ", arr[i][j]);
                else
                    printf("%d\n", arr[i][j]);
            }
        }
    }

    return 0;
}
