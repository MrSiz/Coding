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
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

#define MAXN 4*1e6

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    ll sum = 0;
    int a = 1, b = 1;
    int now = a + b;
    while (now <= MAXN){
        if ((now & 1) == 0)
            sum += now;
        a = b;
        b = now;
        now = a + b;
    }
    cout << sum << endl;
    return 0;
}
