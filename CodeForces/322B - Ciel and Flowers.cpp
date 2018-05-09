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
//    #undef LOCAL
//    #ifdef LOCAL
//        freopen("in.txt", "r", stdin);
//    #endif // LOCAL
    int r, g, b;
    scanf("%d%d%d", &r, &g, &b);
    int res = 0;
    int t_r = r/ 3, t_g = g / 3, t_b = b / 3;
    if (r % 3 > 0) {
        res += r / 3;
        r = r % 3;

    }else {
        if (t_r > 0) {
            res += t_r - 1;
            r -= 3 * (t_r - 1);
        }
    }

    if (g % 3 > 0) {
             res += g / 3;
        g = g % 3;

    }else {
        if (t_g > 0) {
            res += t_g - 1;
            g -= 3 * (t_g - 1);
        }
    }

    if (b % 3 > 0) {
                res += b / 3;
        b = b % 3;

    }else {
        if (t_b > 0) {
            res += t_b - 1;
            b -= 3 * (t_b - 1);
        }
    }




//    cout << res <<endl;
    if (r == 3 && g == 3 && b == 3) {
        printf("%d\n", res + 3);
        return 0;
    }
    int cnt = r / 3 + g / 3 + b / 3;
//    cout << res << endl;
    printf("%d\n", max(res + min(r, min(g, b)), res + cnt));
    return 0;
}
