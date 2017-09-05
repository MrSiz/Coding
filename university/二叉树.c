#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d%d", &x, &y) != EOF){
        while (x != y){
            if (x < y)
                y >>= 1;
            else{
                x >>= 1;
            }
        }
        printf("%d\n", x);
    }
    return 0;
}
