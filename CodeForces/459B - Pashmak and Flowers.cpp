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
constexpr int MAXN = 2 * 1e5 + 5;
int arr[MAXN];
int main()
{
   // file();
    int n;
    scanf("%d", &n);
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
        if (arr[i] >= max_val){
            max_val = arr[i];
        }
        if (arr[i] <= min_val){
            min_val = arr[i];
        }
    }
    ll cnt_max = 0, cnt_min = 0;
    for (int i = 1; i <= n; ++i){
        if (arr[i] == max_val)
            cnt_max++;
        if (arr[i] == min_val)
            cnt_min++;
    }
    if (min_val == max_val){
        printf("%d %I64d\n", 0, (long long)cnt_max * (cnt_max - 1) / 2);
        return 0;
    }
    ll ans = cnt_max * cnt_min;
    printf("%d %I64d\n", max_val - min_val, ans);
    return 0;
}
