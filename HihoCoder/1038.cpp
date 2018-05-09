#include <iostream>

using namespace std;

const int MAXN = 1e5 + 5;
int dp[MAXN];
int need[505], value[505];


int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i){
		cin >> need[i] >> value[i];
	}
	//int val = -1;
	for (int i = 1; i <= n; ++i){
		for (int j = m; j >= need[i]; --j){
			dp[j] = max(dp[j], dp[j - need[i]] + value[i]);
		}
	}
	//cout << val << endl;
	 cout << dp[m] << endl;
	return 0;
}