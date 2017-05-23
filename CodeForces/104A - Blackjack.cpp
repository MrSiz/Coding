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
    int n;
    int arr[15];

    scanf("%d", &n);
    int t = n - 10;
    if (t <= 0 || t > 11){
        return puts("0");
    }
    for (int i = 1; i <= 9; ++i){
        arr[i] = 4;
    }
    arr[10] = 15;
    arr[11] = 4;
    printf("%d\n", arr[t]);
    return 0;
}
