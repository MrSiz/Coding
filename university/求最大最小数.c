#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
//    int arr[10005];
    while (scanf("%d", &n) != EOF){
        int i;
        int temp;
        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        for (i = 0; i < n; ++i){
            scanf("%d", &temp);
            if (temp > maxVal)
                maxVal = temp;
            if (temp < minVal)
                minVal = temp;
        }
        printf("%d %d\n", maxVal, minVal);
    }

    return 0;
}
