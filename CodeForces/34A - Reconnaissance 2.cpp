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
int arr[105];

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    arr[0] = arr[n];
    arr[n + 1] = arr[1];
    int p1 = -1, p2 = -1;
    int dis = INT_MAX;
    for (int i = 1; i <= n; ++i){
        if (abs(arr[i] - arr[i - 1]) < dis){
            dis = abs(arr[i] - arr[i - 1]);
            if(i == 1)
                p1 = i, p2 = n;
            else
                p1 = i, p2 = i - 1;
        }
    }
    printf("%d %d\n", p1, p2);
    return 0;
}
