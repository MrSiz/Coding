#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    int arr[101];
    while (scanf("%d", &n) != EOF){
        int i;
        for (i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
        int m;
        scanf("%d", &m);
        int temp;
        for (i = 0; i < m; ++i){
            scanf("%d", &temp);
            int* pos = (int*)bsearch(&temp, arr, n, sizeof(int), cmp);
            if (pos == NULL)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
