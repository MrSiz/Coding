#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int x, y, i;
        int ansX = INT_MAX, ansY = INT_MAX;
        for (i = 0; i < n; ++i){
            scanf("%d%d", &x, &y);
            if (ansX > x){
                ansX = x;
                ansY = y;
            }else if (ansX == x && y < ansY){
                ansX = x;
                ansY = y;
            }
        }
        printf("%d %d\n", ansX, ansY);
    }

    return 0;
}
