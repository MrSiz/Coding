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
    int y, k, n;
    scanf("%d%d%d", &y, &k, &n);
    int t = n / k;
    bool flag = false;
    for (int i = 1; i <= t; ++i){
        if (i * k - y > 0){
            flag = true;
            printf("%d ", i * k - y);
        }
    }
    if (flag == false){
        puts("-1");
    }
    return 0;
}
