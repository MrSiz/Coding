#include <stdio.h>
#include <stdlib.h>

int arr[1005];

int cmp(const void* a, const void* b)
{
    int arg1 = *(int*)a;
    int arg2 = *(int*)b;
    return arg1 - arg2;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        for (i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        i = 0;
        int sum = 0;
        while (i != n - 1){
            qsort(arr + i, n - i, sizeof(int), cmp);
            sum += arr[i] + arr[i + 1];
            arr[i + 1] = arr[i] + arr[i + 1];
            ++i;
        }
        printf("%d\n", sum);
    }

    return 0;
}
