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
    int cnt = 0;
    for (int i = 0; i <= 1000; ++i){
        for (int j  = 0; j <= 1000; ++j){
            int t1 = i * i + j;
            int t2 = i + j * j;
            if (t1 == n && t2 == m)
                cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
