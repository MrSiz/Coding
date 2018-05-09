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
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

int arr[301];

int main()
{
    #ifdef LOCAL1
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    arr[300] = 1;

    for (int i = 2; i <= 100; ++i){
        int c = 0;
        for (int j = 300; j >= 1; --j){
            arr[j] = arr[j] * i+ c;
            c = arr[j] / 10;
            arr[j] %= 10;
        }
        if (c){
            arr[0] += c;
        }
    }
    int ans = accumulate(arr, arr + 301, 0);
    cout << ans << endl;
    return 0;
}
