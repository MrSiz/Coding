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
constexpr int MAXN = 3e5 + 5;
int arr[MAXN];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    sort(arr + 1, arr + 1 + n);
    ll ans = 0;
    for (int i = 1; i <= n; ++i){
        if (arr[i] < i){
            ans += i - arr[i];
        }else if (arr[i] > i){
            ans += arr[i] - i;
        }
    }
    printf("%I64d\n", ans);
    return 0;
}
