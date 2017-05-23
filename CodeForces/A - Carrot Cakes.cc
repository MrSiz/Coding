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

int main()
{
    int n, t, k, d;
    scanf("%d%d%d%d", &n, &t, &k, &d);
    int cur = 0;
    while (cur <= d){
        n -= k;
        cur += t;
    }
    if (n > 0)
        puts("YES");
    else
        puts("NO");
    return 0;
}

