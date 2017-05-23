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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    int temp = n * y;
    int t;
    prln(1);
    if ((n * y) % 100 == 0){
        t = n * y / 100;
    }else{
        t = n * y / 100 + 1;
    }
    prln(2);
    if (t <= x){
        printf("0\n");
    }else{
        printf("%d\n", t - x);
    }
    return 0;
}
