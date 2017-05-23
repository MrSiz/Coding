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
    //file();
    int n, m;
    scanf("%d%d", &n, &m);
    char ch;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j <= m; ++j){
            scanf("%c", &ch);
            if (ch == '.')
                if ((i + j) & 1)
                    printf("B");
                else
                    printf("W");
            else
                printf("%c", ch);
        }
    }
    return 0;
}
