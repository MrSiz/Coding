#include <stdio.h>

int judge(int Y){
    if ((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int a[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int b[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int Y, M, D;
    while (scanf("%d%d%d", &Y, &M, &D) != EOF){
        if (judge(Y)){
            int i = 1;
            int day = 0;
            while (i < M){
                day += a[i];
                ++i;
            }
            printf("%d\n", day + D);
        }else{
            int i = 1;
            int day = 0;
            while (i < M){
                day += b[i];
                ++i;
            }
            printf("%d\n", day + D);
        }
    }

    return 0;
}
