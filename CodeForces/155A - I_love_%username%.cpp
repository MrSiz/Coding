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
    int cnt = 0;
    int temp;
    scanf("%d", &temp);
    int max_val = temp, min_val = temp;
    for (int i = 2; i <= n; ++i){
        scanf("%d", &temp);
        if (temp < min_val)
            ++cnt, min_val = temp;
        if (temp > max_val)
            ++cnt, max_val = temp;
    }
    printf("%d\n", cnt);
    return 0;
}
