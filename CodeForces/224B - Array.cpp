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

const int maxn = 1e5 + 4;
int a[maxn];

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, k;
    scanf("%d%d", &n, &k);
    int t;
    set<int> ss;
    int res = -1;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (ss.size() < k) {
            ss.insert(a[i]);
            if (ss.size() == k)res = i;
        }
    }

    if (res == -1) {
        puts("-1 -1");
    }else {
        ss.clear();
        int l = -1;
        for (int i = res; i >= 1; --i) {
            ss.insert(a[i]);
            if (ss.size() == k) {
                l = i;
                break;
            }
        }
        printf("%d %d\n", l, res);
    }
    return 0;
}
