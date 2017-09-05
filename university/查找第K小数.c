#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}


int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        int arr[n];
        for (i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        int k;
        scanf("%d", &k);
        qsort(arr, n, sizeof(int), cmp);
        for (i = 0; i < n; ++i){
            if (i == 0)
                --k;
            else if (arr[i] != arr[i - 1])
                --k;
            if (k == 0){
                printf("%d\n", arr[i]);
                break;
            }

        }
    }
    return 0;
}
