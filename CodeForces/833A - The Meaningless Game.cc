#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INT 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

const int MAXN = 1e6 + 5;

ll cubic_root(ll x)
{
    ll l = 0, r = MAXN;
    while (l != r){
        ll m = (l + r + 1) / 2;
        if (m * m * m > x)
            r = m  - 1;
        else
            l = m;
    }
    return l;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        ll a, b;
        scanf("%I64d %I64d", &a, &b);
        ll x = cubic_root(a * b);
        if (x * x * x != a * b)
            puts("No");
        else if (a % x == 0 && b % x == 0)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
