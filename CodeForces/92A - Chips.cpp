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
    int n, m;
    scanf("%d%d", &n, &m);
    int sum = (1 + n) * n / 2;
    if (m >= sum){
        m %= sum;
    }
    int i = 1;
    while ((i + 1) * i <= 2 * m){
        ++i;
    }
    i --;
    sum = (i + 1) * i / 2;
    printf("%d\n", m - sum);
    return 0;
}
