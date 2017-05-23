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
const int MAXN = 1e5 +1;

int main()
{
    //file();
    int i, n, a[MAXN], p[MAXN], x, rep = 0;
    for (i = 0; i < MAXN; ++i){
        a[i] = p[i] = -1;
    }
    fill(a, a + MAXN, -1);
    fill(p, p + MAXN, -1);
    scanf("%d", &n);
    prln(n);
    for ( i = 0; i < n; ++i){
        cin >> x;
        if (a[x] == -1)
            a[x] = 0;
        else if (a[x] == 0)
            a[x] = i - p[x];
        else if (i - p[x] != a[x])
            a[x] = MAXN;
        p[x] = i;
    }
    prln(a[3]);
    for (i = 1; i < MAXN; ++i){
        if (a[i] >= 0 && a[i] != MAXN)
            rep++;
    }
    cout << rep << endl;
    for (i = 1; i < MAXN; ++i){
        //prln(a[i]);
        if (a[i] >= 0 && a[i] != MAXN)
            cout << i << " " << a[i] << endl;
    }
    return 0;
}
