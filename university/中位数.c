#include <stdio.h>
#include <stdlib.h>

int arr[10005];

int cmp(const void* a, const void* b)
{
    int arg1 = *(int*)a;
    int arg2 = *(int*)b;
    return arg1 - arg2;
}


int main()
{
    int n;
    while (scanf("%d", &n) && n){
        int i;
        for (i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
//        printf("%d\n", n);
        if (n & 1){
            printf("%d\n", arr[n >> 1]);
        }else{
            printf("%d\n", (arr[n >> 1] + arr[(n >> 1) - 1]) >> 1);
        }
    }

    return 0;
}
