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

bool P(int n){
    int t = (int)sqrt(n);
    for (int i = 2 ; i <= t; ++i){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    bool flag = false;
    for (int i = n + 1; i <= m - 1; ++i){
        if (P(i)){
            flag = true;
        }
    }
    if (P(m) && !flag){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
