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
    int x, y;
    scanf("%d%d", &x, &y);
    if (x < 0 && y > 0){
        printf("%d %d %d %d\n", -abs(y - x), 0, 0, abs(y - x));
    }else if (x < 0 && y < 0){
        printf("%d %d %d %d\n", x + y, 0, 0, x + y);
    }else if (x > 0 && y > 0){
        printf("%d %d %d %d\n",0, x + y, x + y, 0);
    }else{
        printf("%d %d %d %d\n", 0, -abs(x - y), abs(x - y), 0);
    }
    return 0;
}
