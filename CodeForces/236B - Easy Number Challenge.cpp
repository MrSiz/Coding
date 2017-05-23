#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
const int MAXN = 1e6 + 5;
int p[MAXN];
int d[MAXN];
const int MODE = 1 << 30;
int main()
{
    int tt = sqrt(MAXN);
    int cnt = 0;
    for (int i = 2; i <= tt; ++i){
        if (p[i] == 0){
            p[cnt++] = i;
            for (int j = i * i; j <= MAXN; j += i){
                if (p[j] == 0){
                    p[j] = 1;
                }
            }
        }
    }
    auto func = [&](int x) -> int{
        int t = 0;
        int ans = 1;
        while (x != 1){
            int cc = 0;
            while (x % p[t] == 0){
                ++cc;
                x /= p[t];
            }
            ans *= (cc + 1);
            ++t;
        }
        return ans;
    };
    int a, b, c;
    ll ans = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 1; i <= a; ++i){
        for (int j = 1; j <= b; ++j){
            for (int k = 1; k <= c; ++k){
                int t = i * j * k;
                prln(t);
                ans = (ans + func(t)) % MODE;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
