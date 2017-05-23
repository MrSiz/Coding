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

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    ll n, k;
    scanf("%I64d%I64d", &n, &k);
    ll o_num = 0, e_num = 0;
    if (n & 1)
        o_num = (n >> 1) + 1;
    else
        o_num = n >> 1;
    e_num = n >> 1;
    ll ans = 0;
    if (k <= o_num){
        ans = 2 * k - 1;
    }else{
        ans = 2 * (k - o_num);
    }
    printf("%I64d\n", ans);
    return 0;
}
