#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n;
    scanf("%d", &n);
    int above_r = n;
    for (int i = 0; i <= above_r; ++i){
        int j = 1;
        while (j <= above_r- i){
            printf("  "), ++j;
        }
        j = 0;
        if (i != 0)
            while (j <= i)
                printf("%d ", j), ++j;
        else if (i == 0)
            printf("0");
        j = i - 1;
        while (j >= 0)
            if (j == 0)
                printf("%d", j), --j;
            else
                printf("%d ", j), --j;
        printf("\n");
    }
    for (int i = n - 1; i >= 0; --i){
        int j = 1;
        while (j <= n - i)
            printf("  "), ++j;
        j = 0;
        if (i != 0)
            while (j <= i)
                printf("%d ", j), ++j;
        else if (i == 0)
            printf("0");
        j = i - 1;
        while (j >= 0)
            if (j == 0)
                printf("%d", j), --j;
            else
                printf("%d ", j), --j;
        printf("\n");
    }
    return 0;
}
