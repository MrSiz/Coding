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
int arr[1005];
int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        arr[temp]++;
        if (arr[temp] > (n + 1) / 2)
            return puts("NO");
    }
    puts("YES");
    return 0;
}
