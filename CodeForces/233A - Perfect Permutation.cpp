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
    if (n & 1){
        puts("-1");
        return 0;
    }
    int t = n >> 1;
    for (int i = 1; i <= t; ++i){
        printf("%d %d ", i * 2, i * 2 - 1);
    }
    return 0;
}
