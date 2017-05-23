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
    int l, r;
    int index;
}node[100005];

int main()
{
    //file();
    int n;
    scanf("%d", &n);
    int ans = -1;
    int l_val = INT_MAX, r_val = INT_MIN;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &node[i].l, &node[i].r);
        //if (node[i].l <= l_val && node[i].r >= r_val)
        //    ans = i;
        if (node[i].l <= l_val)
            l_val = node[i].l;
        if (node[i].r >= r_val)
            r_val = node[i].r;
        node[i].index = i;

    }
    for (int i = 1; i <= n; ++i)
        if (node[i].l <= l_val && node[i].r >= r_val)
            ans = node[i].index;
    printf("%d\n", ans);
    return 0;
}
