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
#include <unordered_map>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n, m;
    scanf("%d", &n);
    unordered_map<int, int> mm;
    int temp;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        mm[temp] = i;
    }
    scanf("%d", &m);
    ll l = 0, r = 0;
    for (int i = 1; i <= m; ++i){
        scanf("%d", &temp);
        l += mm[temp];
        r += n - mm[temp] + 1;
    }
    printf("%I64d %I64d\n", l, r);
    return 0;
}
