#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    int arg1 = *(int*)a;
    int arg2 = *(int*)b;
    if (arg1 < arg2)
        return -1;
    else if (arg1 > arg2)
        return 1;
    return 0;
}


int main()
{
    int n, i;
    while (scanf("%d", &n) != EOF){
        int arr[n];
        for (i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        qsort(arr, n, sizeof(int), cmp);
        printf("%d\n", arr[n - 1]);
        if (n - 1 ==0){
            printf("-1\n");
        }else{
            for (i = 0;i < n - 2; ++i){
                printf("%d ", arr[i]);
            }
            printf("%d\n", arr[n - 2]);
        }
    }
    return 0;
}
