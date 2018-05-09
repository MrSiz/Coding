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
const int maxn = 105;
int a[maxn];

int main()
{
    #ifdef LOCAL
//        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n;
    scanf("%d", &n);
    int t;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t);
        a[t] = i;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d%c", a[i], i == n ? '\n' : ' ');
    }
    return 0;
}
