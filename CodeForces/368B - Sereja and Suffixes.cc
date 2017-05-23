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
constexpr int MAXN = 1e5 +5;
bool flag[MAXN];
int cnt[MAXN], arr[MAXN];
int main()
{
    //file();
    int n, m;
    scanf("%d%d", &n, &m);
    int temp;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
        flag[arr[i]] = true;
    }
//    int m;
//    scanf("%d", &m);
    int sum = 0;
    for (int i = n; i >= 1; --i){
        if (flag[arr[i]] == true){
            ++sum;
            flag[arr[i]] = false;
        }
        cnt[i] = sum;
        pr(arr[i]);prln(cnt[arr[i]]);
    }
    for (int i = 1; i <= m; ++i){
        scanf("%d", &temp);
        pr(arr[temp]);
        printf("%d\n", cnt[temp]);
    }
    return 0;
}
