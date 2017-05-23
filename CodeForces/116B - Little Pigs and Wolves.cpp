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
char arr[15][15];

int main()
{
    file();
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            scanf(" %c", &arr[i][j]);
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (arr[i][j] == 'W'){
                if (arr[i - 1][j] == 'P'){
                    ++cnt;
                    arr[i - 1][j] = '.';
                }else if (arr[i][j - 1] == 'P'){
                    ++cnt;
                    arr[i - 1][j] = '.';
                }else if (arr[i][j + 1] == 'P'){
                    ++cnt;
                    arr[i][j + 1] = '.';
                }else if (arr[i + 1][j] == 'P'){
                    ++cnt;
                    arr[i + 1][j] = '.';
                }
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
