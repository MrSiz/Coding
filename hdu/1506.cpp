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
const int MAXN = 1e5 + 5;
ll arr[MAXN];
int l[MAXN],r[MAXN];

int main()
{
    //file();
    int N;
    while(~scanf("%d", &N) && N){
        for (int i = 1; i <= N; ++i){
            scanf("%lld", &arr[i]);
            l[i] = r[i] = i;
        }
        ll ans = INT_MIN;
        arr[0]= arr[N + 1] = -1;
        for (int i = 1; i <= N; ++i){
            while (arr[l[i] - 1] >= arr[i]){
                l[i] = l[l[i] - 1];
            }
        }
        prln(1);
        for (int i = N; i >= 1; --i){
            while (arr[r[i] + 1] >= arr[i]){
                r[i] = r[r[i] + 1];
                prln(r[i]);
                prln(i);
            }
            prln(222);
        }
        prln(2);
        for (int i = 1; i <= N; ++i){
            ll temp = (r[i] - l[i] + 1) * arr[i];
            if ( temp > ans){
                ans = temp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
