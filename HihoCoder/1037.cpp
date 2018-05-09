#include <iostream>

using namespace std;

int main()
{
	int t;
	int arr[105][105];
	cin >> t;
	for (int i = 1; i <= t; ++i){
		for (int j = 1; j <= i; ++j){
			cin >> arr[i][j];
		}
	}
	int dp[105][105] = {0};
	for (int i = 1; i <= t; ++i){
		for (int j = 1; j <= i; ++j){
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
		}
	}
	int ans = -1;
	for (int i = 0; i <= t; ++i){
		ans = max(ans, dp[t][i]);
	}
	cout << ans << endl;
	
	return 0;
}