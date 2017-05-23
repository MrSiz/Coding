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

int a[105], fa[105];

void UF_set(){
    for (int i = 1; i < 105; ++i){
        fa[i] = i;
    }
}

int find_father(int x){
    return x == fa[x] ? x : fa[x] = find_father(fa[x]);
}

void unite(int a, int b){
    int t1 = find_father(a);
    int t2 = find_father(b);
    if (t1 != t2)
        fa[t2] = t1;
}

int main()
{
    //file();
    int n, m, cnt = 0, ans = 0;
    scanf("%d%d", &n, &m);
    memset(a, 0, sizeof(a));
    UF_set();
    for (int i = 0; i < n; ++i){
        int k, fir, next;
        scanf("%d", &k);
        if (k == 0){
            ans++;
            continue;
        }
        scanf("%d", &fir);
        a[fir]++;
        for (int i = 1; i < k; ++i){
            scanf("%d", &next);
            a[next]++;
            unite(fir, next);
        }
    }
    for (int i = 1; i <= m; ++i){
        if (a[i] == 0){
            cnt++;
        }
        if (fa[i] == i){
            ans++;
        }
    }
    printf("%d\n", (cnt == m) ? n : ans - cnt - 1);
    return 0;
}
