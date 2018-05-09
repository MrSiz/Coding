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

char str1[105], str2[105];
int n, dp[105][105], ans[105];


int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	while (scanf("%s%s", str1, str2) != EOF){
		n = strlen(str1);
		for (int i = 0; i < n; ++i){
			dp[i][i] = 1;
		}

		for (int len = 1; len < n; ++len){
			for (int i = 0; i < n; ++i){
				int j = i + len;
				if (j >= n) break;
				dp[i][j] = dp[i + 1][j] + 1;
				for (int k = i; k < j; ++k){
					if (str2[i] == str2[k + 1])
						dp[i][j] = min(dp[i][j], dp[i + 1][k] + dp[k + 1][j]);
				}
			}
		}

		ans[0] = str1[0] == str2[0] ? 0 : 1;
		for (int i = 1; i < n; ++i){
			ans[i] = str1[i] == str2[i] ? ans[i - 1]: dp[0][i];
			for (int j = 0; j < i; ++j){
				ans[i] = min(ans[i], ans[j] + dp[j + 1][i]);
			}
		}
		cout << ans[n - 1] << '\n';
	}
    return 0;
}
