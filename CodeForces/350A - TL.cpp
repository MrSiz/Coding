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
int arr1[101];
int arr2[102];
void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int t_min = INT_MAX, t_max = INT_MIN;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr1[i]);
        if (t_min > arr1[i]){
            t_min = arr1[i];
        }
        if (t_max < arr1[i]){
            t_max = arr1[i];
        }
    }
    int min_val = INT_MAX;
    for (int i = 1; i <= m; ++i){
        scanf("%d", &arr2[i]);
        if (arr2[i] < min_val)
            min_val = arr2[i];
    }
    if (max(t_min * 2, t_max) < min_val){
        printf("%d\n", max(t_min * 2, t_max));
    }else
        printf("%d\n", -1);

    return 0;
}
