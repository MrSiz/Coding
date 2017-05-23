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
const int MAXN = 1e5 + 1;
bool arr[MAXN];

int main()
{
    int n, k, l, m, d;
    scanf("%d%d%d%d%d", &n, &k, &l, &m, &d);
    for (int i = n; i <= d; i += n)
        arr[i] = 1;
    for (int i = k; i <= d; i += k)
        arr[i] = 1;
    for (int i = l; i <= d; i += l)
        arr[i] = 1;
    for (int i = m; i <= d; i += m)
        arr[i] = 1;
    int cnt = 0;
    for (int i = 1; i <= d; ++i){
        if (arr[i] == 1)
            ++cnt;
    }
    printf("%d\n", cnt);
    return 0;
}
