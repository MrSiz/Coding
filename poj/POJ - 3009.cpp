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
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}
int arr[25][25];
int w, h;
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
bool vis[25][25];
int res;
void dfs(int x, int y, int cnt){
    if (cnt > 10){
        return ;
    }
    for (int k = 0; k < 4; ++k){
        int dx = x;
        int dy = y;
        int c = 0;
        while (dx >= 0 && dx < h && dy >= 0 && dy <w){
            dx += dir[k][0];
            dy += dir[k][1];
            ++c;
            if (arr[dx][dy] == 3){
                res = min(res, cnt + 1);
                return ;
            }
            if (arr[dx][dy] == 1){
                break;
            }
        }
        if (arr[dx][dy] == 1 && !(dx - dir[k][0] == x && dy - dir[k][1] == y)){
            arr[dx][dy] = 0;
            dfs(dx - dir[k][0], dy - dir[k][1], cnt + 1);
            arr[dx][dy] = 1;
        }
    }
    return ;
}

int main()
{
    //int w, h;
    //file();
    while (scanf("%d%d", &w, &h) && w != 0 && h != 0){
        int st_x, st_y;
        //int ed_x, ed_y;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < h; ++i){
            for (int j = 0; j < w; ++j){
                scanf("%d", &arr[i][j]);
                if (arr[i][j] == 2){
                    st_x = i;
                    st_y = j;
                }
            }
        }
        res = INT_MAX;
        arr[st_x][st_y] = 0;
        //pr(1);
        dfs(st_x, st_y, 0);
        if (res == INT_MAX || res > 10){
            cout << -1 << endl;
        }
        else {
            cout << res << endl;
       }
    }
        //cout << res << endl;
    return 0;
}
