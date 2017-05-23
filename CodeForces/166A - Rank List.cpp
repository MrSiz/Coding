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
    int p, t;
    bool operator<(const Node& rhs){
        return rhs.p == p ? t < rhs.t :
            p > rhs.p;
    }
}node[55];

int main()
{
    //file();
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i){
        scanf("%d %d", &node[i].p, &node[i].t);
    }
    sort(node + 1, node + 1 + n);
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        if (node[i].p == node[k].p && node[i].t == node[k].t){
            ++cnt;
        }
    }
    printf("%d\n", cnt);
    return 0;
}