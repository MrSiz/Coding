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
    int n, m;
    scanf("%d%d", &n, &m);
    ll ans = 0;
    int temp, pre;
    for (int i = 1; i <= m; ++i){
        scanf("%d", &temp);
        if (i == 1){
            ans += temp - 1;
            pre = temp;
        }else{
            if (temp == pre)
                continue;
            else if (temp > pre){
                ans += temp - pre;
                pre = temp;
            }else if (temp < pre){
                ans += n - pre + temp;
                pre = temp;
            }
        }
    }
    printf("%I64d\n", ans);
    return 0;
}
