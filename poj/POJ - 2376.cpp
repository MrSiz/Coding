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
const int MAXN = 25005;
struct Node{
    int l, r;
}node[MAXN];

bool cmp(Node a, Node b){
    return a.l < b.l;
}

int main()
{
    //file();
    int N, T;
    scanf("%d%d", &N, &T);
    for (int i = 1; i <= N; ++i){
        scanf("%d%d", &node[i].l, &node[i].r);
    }
    //prln(1);
    sort(node + 1, node + 1 + N, cmp);
    int l = 1, r = 1;
    if (node[1].l > 1){
        cout << -1 << endl;
        return 0;
    }
    int ans = 1;
    for (int i = 1; i <= N; ++i){
        if (node[i].l <= l){
            r = max(r, node[i].r);
        }else {
            ++ans;
            l = r + 1;
            if (node[i].l <= l){
                r = max(r, node[i].r);
            }else {
                cout << -1 << endl;
                return 0;
            }
        }
        if (r >= T)
            break;
    }
    //prln(ans);
    if (r >= T){
        cout << ans << endl;
        return 0;
    }else {
        cout << -1 << endl;
    }
    return 0;
}
