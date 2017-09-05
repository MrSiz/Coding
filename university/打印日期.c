#include <stdio.h>

int main()
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int y, d, m;
    while (scanf("%d%d", &y, &d) != EOF){
        m = 0;
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
            while (d > b[m]){
                d -= b[m];
                ++m;
            }
            printf("%04d-%02d-%02d\n", y, m, d);
        }else{
            while (d > a[m]){
                d -= a[m];
                ++m;
            }
            printf("%04d-%02d-%02d\n", y, m, d);
        }
    }
    return 0;
}
