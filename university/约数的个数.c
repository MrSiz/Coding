#include <stdio.h>

int help(int elem)
{
    int i;
    int cnt = 0;
    for (i = 1; i * i < elem; ++i){
        if (elem % i == 0)
            cnt += 2;
    }
    if (i * i == elem)
        cnt++;
    return cnt;
}



int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i, temp;
        for (i = 0; i < n; ++i){
            scanf("%d", &temp);
            printf("%d\n", help(temp));
        }
    }
    return 0;
}
