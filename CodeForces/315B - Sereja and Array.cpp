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

const int MAXN = 1e5 +5;
int arr[MAXN];
int main()
{
    //file();
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    for (int i = 1; i <= m; ++i){
        int temp, val;
        scanf("%d", &temp);
        if (temp == 3){
            scanf("%d", &val);
            printf("%d\n", arr[val] + cnt);
        }else if (temp == 2){
            scanf("%d", &val);
            cnt += val;
        }else{
            int aa;
            scanf("%d%d", &val, &aa);
            arr[val] = aa - cnt;
        }
    }
    return 0;
}
