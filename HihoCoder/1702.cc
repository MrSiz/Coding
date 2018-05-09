#include bitsstdc++.h

using namespace std;

#define INF 0x3f3f3f3f
const int MAXN = 101;

int arr[MAXN][MAXN], dp[MAXN][MAXN][20][2], n;

int main()
{
	scanf(%d, &n);
	for (int i = 0; i  n; ++i) {
		for (int j = 0; j  n; ++j) {
			scanf(%d, &arr[i][j]);
		}
	}
	memset(dp, INF, sizeof(dp));
	dp[0][0][0][0] = 0, dp[0][0][0][1] = 0;

	for (int i = 0; i  n; ++i) {
		for (int j = 0; j  n; ++j) {
			for (int a = 0; a  20; ++a) {
				dp[i + 1][j][a][1] = min(dp[i + 1][j][a][1], dp[i][j][a][1] + arr[i][j]);

				if (a  0) {
					dp[i + 1][j][a][1] = min(dp[i + 1][j][a][1], dp[i][j][a - 1][0] + arr[i][j] + int(pow(2, a - 1)));
				}

				dp[i][j + 1][a][0] = min(dp[i][j + 1][a][0], dp[i][j][a][0] + arr[i][j]);

				if (a  0) {
					dp[i][j + 1][a][0] = min(dp[i][j + 1][a][0], dp[i][j][a - 1][1] + arr[i][j] + int(pow(2, a - 1)));
				}
			}
		}
	}

	int ans = INT_MAX;
	for (int i = 0;i  20; ++i) {
		ans = min(ans, min(dp[n - 1][n - 1][i][0], dp[n - 1][n - 1][i][1]));
	}

	printf(%dn, ans + arr[n - 1][n - 1]);
}