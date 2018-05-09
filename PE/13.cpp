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

const int MAXN = 100;
string str[MAXN];


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    for (int i = 0; i < MAXN; ++i){
        cin >> str[i];
    }
    int c = 0, d = 0;
    short ans[105];
    memset(ans, 0, sizeof(ans));

    for (int i = 49; i >= 0; --i){
        ans[d] += c;
        for (int j = 0; j < MAXN; ++j){
            ans[d] += str[j][i] - '0';
        }
        c = ans[d] / 10;
        ans[d] = ans[d] % 10;
        ++d;
    }
    while (c){
        ans[d++] = c % 10;
        c /= 10;
    }
    for (int i = 1; i <= 10; ++i){
        cout << ans[--d];
    }
    return 0;
}
