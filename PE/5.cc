//pow转换成int过程中，出现了精度问题，故加上0.5

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define MAXN 105
int arr[MAXN];

void prim()
{
    for (int i = 2; i <= MAXN; ++i){
        if (arr[i] == 0){
            for (int j = i + i; j <= MAXN; j += i){
                arr[j] = 1;
            }
        }
    }
    int cnt = 1;
    for (int i = 2; i <= MAXN; ++i){
        if (arr[i] == 0){
            arr[cnt++] = i;
//            cout << i << endl;
        }
    }
    return ;
}
int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    prim();
    ll k = 20, N = 1, i = 1;
    bool flag = true;
    int limit = sqrt(k);
    int a[MAXN];
    pr(arr[i]);prln(k);
    while (arr[i] <= k){
        a[i] = 1;
        if (flag){
            if (arr[i] <= limit){
                a[i] = floor(log(k) / log(arr[i]));
            }else{
                flag = false;
            }
        }
        pr(arr[i]);prln(a[i]);
        cout << (pow(arr[i], a[i])) << endl;
        int t = pow(arr[i], a[i]) + 0.5;
        pr(N);prln(t);
        prln(N * t);
        N = N * t;
        prln(N);
        ++i;
    }
    cout << N << endl;
    return 0;
}
