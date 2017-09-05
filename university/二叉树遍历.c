#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char pre[27], in[27], pos[27];

void build(int low1, int high1, int low2, int high2, int low, int high)
{
    if (low > high)
        return ;
    char c = pre[low1];
    pos[high] = c;
    int k = 0;
    while (in[low2+k] !=c)
        ++k;
    build(low1 + 1, low1 + k, low2, low2 + k - 1, low, low + k - 1);
    build(low1 + k + 1, high1, low2 + k + 1, high2, low + k, high - 1);

    return ;
}

int main()
{
    while (scanf("%s%s",pre, in) != EOF){
        int length = strlen(pre);
        build(0, length - 1, 0, length - 1, 0, length - 1);
        printf("%s\n", pos);
    }

    return 0;
}
