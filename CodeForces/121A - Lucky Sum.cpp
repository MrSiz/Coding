#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll a[(2 << 10) + 5];

ll sum;

void dfs(ll now, int num)
{
    if (num == 10)
        return ;
    a[++sum] = now * 10 + 4;
    a[++sum] = now * 10 + 7;

    dfs(now * 10 + 4, num + 1);
    dfs(now * 10 + 7, num + 1);
}

int main()
{

//    #ifdef LOCAL
//        freopen("in.txt", "r", stdin);
//        freopen("out.txt", "w", stdout);
//    #endif
    sum = 0;
    dfs(0, sum);
    sort(a + 1, a + sum + 1);

    ll l, r;
    while (~scanf("%lld%lld", &l, &r) ) {
        ll now = l;
        ll da = 0;
        ll shang = l - 1;
        for (int i = 1; i <= sum; ++i) {
            if (a[i] < now)
                continue;
            // cout << i << a[i] << endl;
            if (r <= a[i]) {
                da += a[i] * (r - shang);
                break;
            }
            da += a[i] * (a[i] - shang);
            shang = a[i];
            //cout << da << endl;
        }
        cout << da << endl;
    }
}
