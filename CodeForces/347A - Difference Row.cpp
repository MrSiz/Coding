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

int arr[105];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    sort(arr + 1, arr + 1 + n);
    swap(arr[1], arr[n]);
    for (int i = 1; i <= n; ++i){
        printf("%d ", arr[i]);
    }
    return 0;
}
