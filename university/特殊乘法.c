#include <stdio.h>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF){
        int sum = 0;
        while (a){
            int elem = a % 10;
            a /= 10;
            int temp = b;
            while (temp){
                int t = temp % 10;
                temp /= 10;
                sum += elem * t;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
