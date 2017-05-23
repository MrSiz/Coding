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
int a[101], b[101];
int arr[1001];
void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &a[i], &b[i]);
        arr[b[i]]++;
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        if ((a[i] == b[i] && arr[a[i]] == 1) || !(arr[a[i]]))
            ++cnt;
    }
    printf("%d\n", cnt);
    return 0;
}
