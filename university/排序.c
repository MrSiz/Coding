#include <stdlib.h>
#include <stdio.h>

int cmp(const void* a, const void* b){
    int arg1 = *(int*)a;
    int arg2 = *(int*)b;
    if (arg1 < arg2)
        return -1;
    else if (arg1 == arg2)
        return 0;
    return 1;
}

int main(){
    int n;
    int arr[105];
    while (scanf("%d", &n) != EOF){
        int i = 0;
        for (; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
//        int i = 0;
        i = 0;
        for (; i < n; ++i){
            if (i != n - 1)
                printf("%d ", arr[i]);
            else
                printf("%d \n", arr[i]);
        }
    }

    return 0;
}
