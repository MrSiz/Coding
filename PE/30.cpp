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


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    const int MAXN = pow(9, 5) * 5;
    int ans = 0;
    for (int i = 2; i <= MAXN; ++i){
        int sum = 0;
        int j = i;
        while (j){
            sum += pow(j % 10, 5);
            j /= 10;
        }
        if (sum == i){
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}
