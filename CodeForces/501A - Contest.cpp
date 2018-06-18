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

#define eps 1e-5
int main()
{
//    #ifdef LOCAL
//        freopen("in.txt", "r", stdin);
//    #endif // LOCAL
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double t1 = max(3.0 * a / 10, a - a * 1.0 / 250 * c);
    double t2 = max(3.0 * b / 10, b - b * 1.0 / 250 * d);
    if (t1 - t2 > eps) {
        puts("Misha");
    }else if (t1 - t2 < 0) {
        puts("Vasya");
    }else {
        puts("Tie");
    }
    return 0;
}
