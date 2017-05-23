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
const int MAX = 15 * 1e4 + 5;
int arr[MAX];
ll sum[MAX];

int main()
{
    //file();
    int n, k;
    scanf("%d%d", &n, &k);
    int min_help = INT_MAX;
    int ans_help = -1;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
        sum[i] += sum[i - 1] + arr[i];
        if (arr[i] <= min_help){
            min_help = arr[i];
            ans_help = i;
        }
    }
    if (k == 1){
        printf("%d\n", ans_help);
        return 0;
    }
    int min_val = INT_MAX;
    int ans = -1;
    for (int i = 1; i + k - 1 <= n; ++i){
        if (sum[i + k - 1] - sum[i - 1] <= min_val){
            ans = i;
            min_val = sum[i + k - 1] - sum[i - 1];
        }
    }
    printf("%d\n", ans);
    return 0;
}
