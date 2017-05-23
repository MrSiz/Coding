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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
char arr[15][15];
bool vis[15][15];

int main()
{
    //file();
    int r, c;
    scanf("%d%d", &r, &c);
    for (int i = 1; i <= r; ++i){
        for (int j = 1; j <= c; ++j){
            scanf(" %c", &arr[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 1; i <= r; ++i){
        bool flag = true;
        for (int j = 1; j <= c; ++j){
            prln(arr[i][j]);
            if (arr[i][j] == 'S'){
                flag = false;
                break;
            }
        }
        if (flag == true){
            cnt += c;
            for (int j = 1; j <= c; ++j){
                vis[i][j] = true;
            }
        }
    }
    prln(cnt);
    for (int j = 1; j <= c; ++j){
        bool flag = true;
        for (int i = 1; i <= r; ++i){
            if (arr[i][j] == 'S')
                flag = false;
        }
        if (flag == true){
            for (int i = 1; i <= r; ++i){
                if (vis[i][j] == 0)
                    ++cnt;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
