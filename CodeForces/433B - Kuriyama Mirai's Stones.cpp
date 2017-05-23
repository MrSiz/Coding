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
constexpr int MAXN = 1e5 + 5;
int arr[MAXN];
ll sum1[MAXN];
ll sum2[MAXN];
int n;
int lowbit(int x){
    return x & (-x);
}

void up(int k, int val){
    while (k <= n){
        sum1[k] += val;
        k += lowbit(k);
    }
    return ;
}

ll add_sum(int k){
    ll sum = 0;
    while (k){
        sum += sum1[k];
        k -= lowbit(k);
    }
    return sum;
}


void up2(int k, int val){
    while (k <= n){
        sum2[k] += val;
        k += lowbit(k);
    }
    return ;
}

ll another_sum(int k){
    ll sum = 0;
    while (k){
        sum += sum2[k];
        k -= lowbit(k);
    }
    return sum;
}


int main()
{
    //file();
    scanf("%d", &n);
    //ll ans = 0;
    int temp = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        up(i, temp);
        arr[i] = temp;
    }
//    for (int i = 1; i <= n; ++i)
//        prln(sum1[i]);
    sort(arr + 1, arr + 1 + n);
    for (int i = 1; i <= n; ++i){
        up2(i, arr[i]);
    }
//    for (int i = 1; i <= n; ++i){
//        prln(arr[i]);
//        prln(sum2[i]);
//    }
    int m;
    scanf("%d", &m);
    int type, l, r;
    for (int i = 1; i <= m; ++i){
        scanf("%d%d%d", &type, &l, &r);
        if (type == 1){
            pr(add_sum(r));prln(add_sum(l - 1));
            printf("%I64d\n", add_sum(r) - add_sum(l - 1));
        }else{
            pr(another_sum(r));prln(another_sum(l));
            printf("%I64d\n", another_sum(r) - another_sum(l - 1));
        }
    }
    return 0;
}
