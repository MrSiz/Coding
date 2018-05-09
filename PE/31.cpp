//eg: dp[10] = dp[9(10 - 1)] + dp[8(10 - 2)] + dp[5(10 -5)]+ .... dp[0];
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
int arr[]{1, 2, 5, 10, 20, 50, 100, 200};
int ans[201];

int main()
{
    ans[0] = 1;

    for (int i = 0; i < 8; ++i){
        //cout << arr[i] << endl;
        for (int j = arr[i]; j < 201; ++j){
            ans[j] += ans[j - arr[i]];
        }
    }
    cout << ans[200] << endl;
    return 0;
}

