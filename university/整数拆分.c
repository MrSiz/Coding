#include <stdio.h>

#define MODE 1000000000

int arr[1000001];

int main()
{
    arr[1] = 1;
    int i, j;
    for (i = 2; i < 1000001; ++i){
        if (i & 1)
            arr[i] = arr[i - 1];
        else
            arr[i] = (arr[i - 1] + arr[i >> 1]) % MODE;
    }
    int n;
    while (scanf("%d", &n) != EOF){
        printf("%d\n", arr[n]);
    }

    return 0;
}
