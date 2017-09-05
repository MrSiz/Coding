#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        long long arr[100];
        memset(arr, 0, sizeof arr);
        arr[1] = 1, arr[2] = 2;
        int i;
        for (i = 3; i <= n; ++i){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        printf("%lld\n", arr[n]);
    }
    return 0;
}
