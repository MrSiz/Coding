#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j, k;
    for (i = 0; i <= 9; ++i){
        for (j = 0; j <= 9; ++j){
            for (k = 0; k <= 9; ++k){
                int sum1 = i * 100 + j * 10 + k;
                int sum2 = j * 100 + k * 10 + k;
                if (sum1 + sum2 == 532)
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
