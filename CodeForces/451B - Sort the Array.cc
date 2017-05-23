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
const int MAXN = 1e5 +5;
int arr[MAXN], arr2[MAXN];

int main()
{
    //file();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
        arr2[i] = arr[i];
    }
    sort(arr2 + 1, arr2 + 1 + n);
    int i = 0;// l = -1;
    while (arr2[i] == arr[i]){
        ++i;
    }
    int l = i;
    i = n;
    while (arr2[i] == arr[i]){
        pr(arr2[i]);prln(arr[i]);
        --i;
    }
    pr(arr2[i]);prln(arr[i]);
    int r = i;
    int t_l = l, t_r = r;
    i = 0;
    prln(l);
    prln(r);
    while (t_l + i<= t_r){
        if (arr2[t_l + i] != arr[t_r - i])
            return puts("no");
        ++i;
    }
    if (l > r){
        puts("yes\n 1 1");
        return 0;
    }
    printf("yes\n%d %d\n", l, r);
    return 0;
}
