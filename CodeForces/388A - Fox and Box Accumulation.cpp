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

int a[105];


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);

    int len = n;
    int ans = 0;
    while (len) {
        int temp = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] == -1) continue;
            if (a[i] >= temp) {
                temp++;
                a[i] = -1;
                --len;
            }
        }
        ++ans;
    }

    cout << ans << endl;

    return 0;
}
