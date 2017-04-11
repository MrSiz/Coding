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

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

void file()
{
    freopen("in.txt", "r", stdin);
}
int N, M;
char arr[105][105];
int dir[8][2] = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
void dfs(int x, int y){
    arr[x][y] = '.';
    for (int k = 0; k < 8; ++k){
        int dx = x + dir[k][0];
        int dy = y + dir[k][1];
        if (0 <= dx && dx < N && 0 <= dy && dy < M && arr[dx][dy] == 'W'){
            dfs(dx, dy);
        }
    }
    return ;
}


int main()
{
    //file();
    cin >> N >> M;
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < M; ++j){
            cin >> arr[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < M; ++j){
            if (arr[i][j] == 'W'){
                ++res;
                dfs(i, j);
            }
        }
    }
    cout << res << endl;
    return 0;
}
