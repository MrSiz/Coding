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
ll arr[27];
int main()
{
    //file();
    ll n, k;
    scanf("%I64d%I64d", &n, &k);
    char ch;
    for (int i = 1; i <= n; ++i){
        scanf(" %c", &ch);
        arr[ch - 'A']++;
        //prln(arr[ch - 'A']);
    }
    sort(arr, arr + 26);
    int i = 25;
    ll sum = 0;
    while (i >= 0 && k >= 0){
        int t = k - arr[i];
        if (t >= 0){
            sum += arr[i] * arr[i];
            k -= arr[i];
        }else{
            sum += k * k;
            k = 0;
        }
        --i;
    }
    printf("%I64d\n", sum);
    return 0;
}
