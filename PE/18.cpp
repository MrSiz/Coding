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
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)


int dp[16][16];
int arr[16][16];


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    for (int i = 1; i <= 15; ++i){
        for (int j = 1; j <= i; ++j){
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    for (int i = 2; i <= 15; ++i){
        for (int j = 1; j <= i; ++j){
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
        }
    }

    cout << *max_element(&dp[15][0], &dp[15][16]) << endl;
    return 0;
}
