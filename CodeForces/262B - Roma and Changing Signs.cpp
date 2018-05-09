#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>


using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
const int maxn = 1e5 + 5;
int arr[maxn];
int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, k;
    scanf("%d%d", &n, &k);
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
//        cout << arr[i] << endl;
        if (arr[i] < 0) ++cnt;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0 && k > 0) {
            arr[i] = -arr[i];
            --k;
        }
    }

//    for (int i = 0; i < n; ++i) {
//        printf("%d ", arr[i]);
//    }
    if (k & 1) {
        sort(arr, arr + n);
        arr[0] = -arr[0];
    }
    int res = accumulate(arr, arr + n, 0);
    printf("%d\n", res);
    return 0;
}
