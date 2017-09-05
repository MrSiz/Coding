#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int ans = n * n;
        if (n / 10 == 0){
            if (n == (ans % 10)){
                printf("Yes!\n");
            }else
                printf("No!\n");
        }else{
            if (n == (ans % 100))
                printf("Yes!\n");
            else
                printf("No!\n");
        }
    }
    return 0;
}
