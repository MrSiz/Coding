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
    int x, y, z;
    int ans_x = 0, ans_y = 0, ans_z = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d%d", &x, &y, &z);
        ans_x += x, ans_y += y, ans_z += z;
    }
    if (ans_x == 0 && ans_y == 0 && ans_z == 0){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
