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
const int MAXN = 101;

int main()
{
    int arr[MAXN];
    int n;
    scanf("%d", &n);
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    int pos_max = -1, pos_min = -1;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
        if (arr[i] <= min_val){
            min_val = arr[i];
            pos_min = i;
        }
        if (arr[i] > max_val){
            max_val = arr[i];
            pos_max = i;
        }
    }
    int ans = -1;
    if (pos_min < pos_max)
        ans = pos_max - 1 + n - pos_min - 1;
    else
        ans = pos_max - 1 + n - pos_min;
    printf("%d\n", ans);
    return 0;
}
