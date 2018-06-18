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


using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)


int main()
{
//    #ifdef LOCAL
//        freopen("in.txt", "r", stdin);
//    #endif // LOCAL
    int n;
    scanf("%d", &n);
    int t;
    int ans = -1;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t);
        if (t >= ans)
            ans = t;
    }
    printf("%d\n", ans);
    return 0;
}
