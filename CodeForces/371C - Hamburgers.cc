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
#define pr(x) (cout << #x << ' ' << x)
#define prln(x) (cout << #x << ' ' << x << endl)


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    string str;
    ll nb, ns, nc;
    ll pb, ps, pc;
    ll r;
    while (cin >> str >> nb >> ns >> nc >> pb >> ps >> pc >> r){
        int b = 0, s = 0, c = 0;
        for (const auto& elem : str){
            if (elem == 'B')
                ++b;
            else if (elem == 'S')
                ++s;
            else
                ++c;
        }
        ll st = 0, ed = 2e12;
        ll x, y, z;
        while (ed - st > 1){
            ll m = st + (ed - st) / 2;
            x = max(b * m - nb, 0ll);
            y = max(s * m - ns, 0ll);
            z = max(c * m - nc, 0ll);
            ll w = x * pb + y * ps + z * pc;
            if (w <= r) st = m;
            else ed = m;
        }
        cout << st <<endl;
    }
    return 0;
}
