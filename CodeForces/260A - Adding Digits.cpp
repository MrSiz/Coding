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
    ll a;
    int b, n;
    bool flag = false;
    scanf("%I64d%d%d", &a, &b, &n);
    for (int i = 0; i <= 9; ++i){
        int t = a;
        t *= 10;
        t += i;
        if (t % b == 0){
            flag = true;
            a = t;
            break;
        }
    }
    if (!flag)
        return puts("-1");
    else{
        printf("%d", a);
        for (int i = 2; i <= n; ++i){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
