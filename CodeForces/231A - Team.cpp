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

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c;
    int ans = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d%d", &a, &b, &c);
        int cnt = 0;
        if (a == 1)
            ++cnt;
        if (b == 1)
            ++cnt;
        if (c == 1)
            ++cnt;
        if (cnt >= 2)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}