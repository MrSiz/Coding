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
const int maxn = 1e3 + 5;
int r[maxn], c[maxn];
int arr[maxn][maxn];


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; ++i) {
        r[i] = i;
    }
    for (int i = 1; i <= m; ++i) {
        c[i] = i;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    char cc[3];
    int x, y;
    for (int i = 1; i <= k; ++i) {
        scanf("%s%d%d", &cc, &x, &y);
        if (cc[0] == 'g') {
            printf("%d\n", arr[r[x]][c[y]]);
//            printf("%d\n", arr[r[x]][c[y]]);
        }else if (cc[0] == 'c') {
            swap(c[x], c[y]);
        }else {
            swap(r[x], r[y]);
        }
    }
    return 0;
}
