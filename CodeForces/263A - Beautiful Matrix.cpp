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
int arr[6][6];

int main()
{
    int n;
    int x, y;
    for (int i = 1; i <= 5; ++i){
        for (int j = 1; j <= 5; ++j){
            scanf("%d", &n);
            if (n == 1){
                x = i, y = j;
            }
        }
    }
    int ans = abs(x - 3) + abs(y - 3);
    printf("%d\n", ans);
    return 0;
}
