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
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}
char arr[25][25];
bool vis[25][25];
int W, H;
int ans;
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
void bfs(int x, int y){
    queue<pair<int, int> > que;
    memset(vis, 0, sizeof(vis));
    que.push(make_pair(x, y));
    ans = 1;
    while (!que.empty()){
        pair<int, int> temp = que.front();
        que.pop();
        int t_x = temp.first;
        int t_y = temp.second;
        //if (vis[t_x][t_y])
           // continue;
        for (int k = 0; k < 4; ++k){
            int dx = t_x + dir[k][0];
            int dy = t_y + dir[k][1];
            pr(dx);prln(dy);
            if (dx >= 0 && dx < W && dy >= 0 && dy < H && vis[dx][dy] == false && arr[dx][dy] == '.'){
                vis[dx][dy] = true;
                ++ans;
                prln(ans);
                que.push(make_pair(dx, dy));
            }
        }
        prln(que.size());
    }
    return ;
}
int main()
{
    //file();
    int st_x, st_y;
    while (~scanf("%d%d", &H, &W) && W != 0 && H != 0){
        getchar();
        for (int i = 0; i < W; ++i){
            for (int j = 0; j < H; ++j){
                scanf("%c", &arr[i][j]);
                if (arr[i][j] == '@'){
                    //prln(arr[i][j]);
                    st_x = i;
                    st_y = j;
                    //pr(i);prln(j);
                }
            }
            getchar();
        }
//        for (int i = 0; i < W; ++i){
//            for (int j = 0; j < H; ++j){
//                cout <<arr[i][j];
//            }
//            cout << endl;
//        }
       // prln(1);
        pr(st_x);prln(st_y);
        bfs(st_x, st_y);
        cout << ans << endl;
    }

    return 0;
}
