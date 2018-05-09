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
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, x;
    scanf("%d%d", &n, &x);
    int sum = 0;
    int t;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &t);
        sum += t;
    }
    sum = abs(sum);
    if (sum % x == 0) {
        printf("%d\n", sum / x);
    }else {
        printf("%d\n", sum / x + 1);
    }
    return 0;
}
