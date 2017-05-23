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
int arr[8];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 7; ++i){
        scanf("%d", &arr[i]);
    }
    int ans = -1;
    while (n){
        for (int i = 1; i <= 7; ++i){
            if (arr[i] < n)
                n -= arr[i];
            else{
                ans = i, n = 0; break;
            }

        }
    }
    printf("%d\n", ans);
    return 0;
}
