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
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define eps 1e-9

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int ans_u = 1;
    int ans_d = 1;
    for (int i = 11; i < 100; ++i){
        if (i % 10 == 0)
            continue;
        int temp = i % 10;
        int aa = i / 10;
        if (temp < aa){
            continue;
        }else if (temp == aa){
            temp = temp * 10 + temp + 1;
        }else {
            temp = temp * 10 + 1;
        }
        int kk = (temp / 10 + 1) * 10;
        for (int j = temp; j < kk; ++j){
            int new_up = aa;
            int new_down = j % 10;
            if (fabs(new_down * 1.0 / new_up - j * 1.0/ i) < eps){
                ans_u *= new_up;
                ans_d *= new_down;
            }
        }
    }
    int gg = gcd(ans_u, ans_d);
    prln(ans_d / gg);
    return 0;
}
