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
    ll n;
    scanf("%I64d", &n);
    n *= 2;
    ll k = (double)sqrt(n) + 0.5;
    for (int i = 1; i <= k; ++i) {
        int rem = n - i * i - i;
        int temp = sqrt(rem);
        if (temp == 0) continue;
        if ((temp * (temp + 1)) == rem) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
