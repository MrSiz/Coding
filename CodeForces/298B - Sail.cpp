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

int main()
{
    //file();
    int t, sx, sy, ex, ey;
    scanf("%d%d%d%d%d", &t, &sx, &sy, &ex, &ey);
    string str;
    cin >> str;
    int r = ex - sx;
    int c = ey - sy;
    int e = 0, w = 0, n = 0, s = 0;
    if (r < 0)
        w = -r;
    if (r > 0)
        e = r;
    if (c < 0)
        s = -c;
    if (c > 0)
        n = c;
    //int cnt_e = 0, cnt_w = 0, cnt_n = 0, cnt_s = 0;
    pr(s);pr(e);pr(w);prln(n);
    int i = 0, length = str.size();
    for (; i < length; ++i){
            prln(str[i]);
        if (str[i] == 'S' && s > 0)
            --s;
        if (str[i] == 'W' && w > 0)
            --w;
        if (str[i] == 'N' && n > 0)
            --n;
        if (str[i] == 'E' && e > 0)
            --e;
        if (e == 0 && w == 0 && n == 0 && s == 0){
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
