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

ll pow1(ll a, ll b){
    ll res = 1;
    while(b){
        if (b & 1){
            res *= a;
        }
        a *= a;
        b >>= 1;
    }
    prln(res);
    return res;
}

int main()
{
    ll a, b, c;
    scanf("%I64d%I64d%I64d", &a, &b, &c);
    int cnt = 0;
    ll ans[4500];
    for (int i = 1; i < 100; ++i){
        ll temp = b * (ll)pow1(i, a) + c;
        ll tt = temp;
        int sum = 0;
        while (tt){
            sum += tt % 10;
            tt /= 10;
        }
        pr(sum);prln(temp);
        if (sum == i){
            if (temp > 0 && temp < 1e9)
                ans[cnt++] = temp;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; ++i){
        printf("%I64d ", ans[i]);
    }
    return 0;
}
