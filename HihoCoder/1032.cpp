#include <iostream>
#include <cstring>
#include <string>
#include <climits>

using namespace std;

const int MAX = 1e6 + 1;
int cnt[2 * MAX];

int solve(const string& str)
{
	string now;
	now.resize(str.size() * 2 + 1);
	int temp = str.size();
	now[0] = '#';
	for (int i = 0, j = 0; i < temp; ++i){
		now[++j] = str[i];
		now[++j] = '#';
	}
	
	memset(cnt, 0, sizeof(cnt));
	
	cnt[0] = 1;
	int length = now.size();
	
	int id = 0, mx = 0;
	for (int i = 1; i < length; ++i){

		cnt[i] = mx > i ? min(cnt[2 * id - i], mx - i) : 1;
		while ( i - cnt[i] >= 0 && i + cnt[i] < length && now[i + cnt[i]] == now[i - cnt[i]]){
			++cnt[i];
		}
		if (cnt[i] + i - 1> mx){
			mx = cnt[i] + i - 1;
			id = i;
		}
	}
	int ans = INT_MIN;
	for (int i = 0; i < length; ++i){
		if (ans < cnt[i]){
			ans = cnt[i];
		}
	}
	return ans - 1;
}

int main()
{
	int n;
	cin >> n;
	while (n--){
		string str;
		cin >> str;
		cout << solve(str) << endl;
	}

	return 0;
}