#include <stdio.h>

int solve(int i, int j)
{
    if (j == 1 || i == j)
        return 1;
    else if (j == 0 || i < j)
        return 0;
    return solve(i - 1, j - 1) + solve(i - 1, j);
}


int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i, j;
        for (i = 2; i <= n; ++i){
            for (j = 1; j < i; ++j){
                printf("%d ", solve(i, j));
            }
            printf("%d\n", solve(i, j));
        }
    }
    return 0;
}
