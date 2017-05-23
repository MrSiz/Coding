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
int arr[1005];

int main()
{
    int n, m, a, b;
    scanf("%d%d", &n, &m);
    int ans = 1;
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < m; ++i){
        scanf("%d%d", &a, &b);
        arr[a]++;
        arr[b]++;
    }
    for (int i = 1; i <= n; ++i){
        if (!arr[i]){
            ans = i;
            break;
        }
    }
    printf("%d\n", n - 1);
    for (int i = 1; i <= n; ++i){
        if (i != ans){
            printf("%d %d\n", ans, i);
        }
    }
    return 0;
}
