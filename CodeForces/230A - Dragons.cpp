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

struct Node{
    int x, y;
    bool operator<(const Node& rhs){
        return x == rhs.x ? y > rhs.y : x < rhs.x;
    }
}node[10004];

int main()
{
    int s, n;
    scanf("%d%d", &s, &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &node[i].x, &node[i].y);
    }
    sort(node + 1, node + 1 + n);
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        if (s > node[i].x)
            s += node[i].y, ++cnt;
        else
            break;
    }
    if (cnt == n)
        puts("YES");
    else
        puts("NO");
    return 0;
}
