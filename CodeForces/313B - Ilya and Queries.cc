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
const int MAXN = 1e5 +5;
char arr[MAXN];
int sum[MAXN];
int another[MAXN];

int main()
{
    //file();
    gets(arr + 1);
    int length = strlen(arr + 1);
    for (int i = 1; i <= length; ++i){
        if (arr[i] == arr[i - 1]){
            sum[i] = sum[i - 1] + 1;
        }else{
            sum[i] = sum[i - 1];
        }
        pr(i);prln(sum[i]);
    }
    int n;
    prln(length);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", sum[r] - sum[l]);
    }
    return 0;
}
