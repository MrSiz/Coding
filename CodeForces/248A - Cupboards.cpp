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
    int l_0 = 0, l_1 = 0;
    int r_0 = 0, r_1 = 0;
    int l, r;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &l, &r);
        if (l == 1)
            ++l_1;
        else if (l == 0)
            ++l_0;
        if (r == 1)
            ++r_1;
        else if (r == 0)
            ++r_0;
    }
    printf("%d", min(l_0, l_1) + min(r_0, r_1));
    return 0;
}
