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
    //file();
    char s1[11], s2[11];
    scanf("%s%s", s1, s2);
    int n = strlen(s1);
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans += (s1[i] == '+' ? 1 : -1);
    int fin = 0;
    int m = 0;
    for (int i = 0; i < n; ++i){
        if (s2[i] == '?')
            m++;
        else
            fin += (s2[i] =='+' ? 1 : -1);
    }

    int dis = ans - fin;
    double res;
    if ((dis + m) % 2 != 0 || m < abs(dis))
        res = 0;
    else{
        int mm = (m + abs(dis)) / 2;
        int c = 1;
        for (int i = 0; i < mm; ++i)
            c *= m - i;
        for (int i = 2; i <= mm; ++i)
            c /= i;
        res = (double)c / (1 << m);
    }
    printf("%.12f\n", res);
    return 0;
}
