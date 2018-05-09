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
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

const int MAXN = 28123;
//const int MAXN = 3;
bool flag[MAXN + 2];
int val[MAXN];

int main()
{
    int cnt = 0;
    for (int i = 2; i < MAXN; ++i){
        int n = sqrt(i);
//        prln(n);
        int sum = 0;
        for (int j = 1; j <= n; ++j){
            if (i % j == 0){
                sum += j + i / j;
            }
//            prln(sum);
        }
        if (n * n == i){
            sum -= n;
        }
        sum -= i;
        if (sum > i){
            //flag[i] = 1;
//            prln(i);
            val[cnt++] = i;
        }
    }
    ll res = 0;
    prln(cnt);
    for (int i = 0; i < cnt; ++i){
        for (int j = i; j < cnt; ++j){
            if (val[i] + val[j] < MAXN){
                flag[val[i] + val[j]] = 1;
//                res += val[i] + val[j];
            }
        }
    }
    cout << res << endl;
//    ll ans = 28122 * (1 + 28122) / 2;
    int sum = 0;
    for (int i = 1; i < MAXN; ++i){
        if (flag[i] == 0){
            sum += i;
//            prln(sum);
        }
    }
//    cout << ans << endl;
    cout << sum << endl;
    //cout << sum << endl;
}

