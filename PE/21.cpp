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

bool flag[10001];

int solve(int n)
{
    int sum1 = 0, sum2 = 0;
    int val = 0;
    int t_n = n >> 1;
    flag[n] = 1;
    for (int i = 1; i <= t_n; ++i){
        if (n % i == 0){
            val += i;
        }
    }
    int t_val = val >> 1;
    int res = 0;
    for (int i = 1; i <= t_val; ++i){
        if (val % i == 0){
            res += i;
        }
    }
    if (val < 10001)
        flag[val] = 1;
    if (res == n && n != val && res < 10001 && val < 10001){
        pr(val);prln(n);
        return res + val;
    }
    return -1;
}


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int res = 0;
    for (int i = 0; i <= 10000; ++i){
       if (flag[i] == 0){
            int re = solve(i);
//            prln(re);
            if (re != -1){
//                prln(re);
                res += re;
            }
       }
    }
    prln(res);
    return 0;
}
