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
    int p, e;
}node[100005];

int main()
{
    int n;
    scanf("%d", &n);
    int p, e;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &node[i].p, &node[i].e);
    }
    sort(node + 1, node + 1 + n,[](const Node& lhs, const Node& rhs){
            if (lhs.p == rhs.p)
                return lhs.e > rhs.e;
            return lhs.p < rhs.p;
         });
    for (int i = 1; i < n; ++i){
        if (node[i + 1].e < node[i].e)
            return puts("Happy Alex");
    }
    puts("Poor Alex");
    return 0;
}
