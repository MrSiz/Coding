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
    int n;
    scanf("%d", &n);
    int ou, in;
    int cnt = 0;
    int ans = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &ou, &in);
        if (i != 1){
            cnt -= ou;
        }
        cnt += in;
        if (cnt > ans)
            ans = cnt;
    }
    printf("%d\n", ans);
    return 0;
}
