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
    //file();
    int n;
    prln(1111);
    scanf("%d", &n);
    int cnt = 0;
    prln(n);
    for (int i = 1; i <= n; ++i){
        prln(11);
        for (int j = i + 1; j <= n; ++j){
            int temp = i * i + j * j;
            int k = sqrt(temp);
            if (k > n)
                continue;
            if (k * k != temp)
                continue;
            if (i + j > k && i + k > j &&
                j + k > i)
                    cnt++;
        }
    }
    prln(12333);
    printf("%d\n", cnt);
    return 0;
}
