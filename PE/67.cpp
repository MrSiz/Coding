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
#define eps 1e-6

int a[105][105];
int dp[105][105];

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	for (int i = 1; i <= 100; ++i){
		for (int j = 1; j <= i; ++j){
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 1; i <= 100; ++i){
		for (int j = 1; j <= i; ++j){
			printf("%d%c", a[i][j], (i == j ? '\n' : ' '));
		}
	}

	for (int i = 1; i <= 100; ++i){
		for (int j = 1; j <= i; ++j){
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
		}
	}
	int val = *max_element(dp[100] + 1, dp[100] + 101);
	cout << val << endl;
    return 0;
}
