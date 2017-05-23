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
constexpr int MAXN = 1e4 + 5;
int arr[MAXN];

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    //file();
    int n, m, d;
    scanf("%d%d%d", &n, &m, &d);
    n *= m;
    scanf("%d", &arr[1]);
    for (int i = 2; i <= n; ++i){
        scanf("%d", &arr[i]);
        if ((arr[i] - arr[i - 1]) % d != 0){
            return puts("-1");
        }
    }
    sort(arr + 1, arr + 1 + n);
    int mid = (1 + n) >> 1;
    int tt = arr[mid];
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        cnt += abs(tt - arr[i]) / d;
    }
    printf("%d\n", cnt);
    return 0;
}
