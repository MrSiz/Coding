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

const int MAXN = 1e9;

bool prim[MAXN];

void init()
{
	prim[0] = prim[1] = 1;

	for (int i = 2; i < MAXN; ++i){
		if (prim[i] == 0){
			for (int j = i + i; j < MAXN; j += i){
				prim[j] = 1;
			}
		}
	}

	return ;
}

bool pandigit(int n)
{
	int cnt[10] = {0};
	int t = 0, max_val = -1;
	while (n){
		int temp = n % 10;
		if (temp > max_val)
			max_val = temp;
		cnt[t++] = temp;
		n /= 10;
	}

	for (int i = 1; i <= max_val; ++i){
		if (cnt[i] == 0 || cnt[i] > 1){
			return false;
		}
	}
	
	return true;
}

int main()
{
	// #ifdef LOCAL
	// 	freopen("in.txt", "r", stdin);
	// 	freopen("out.txt", "w", stdout);
	// #endif
	prln("start");
	init();
	prln("start");
	while (true){
		string temp = "123456789";
		vector<string> t;
		while (temp.size() > 0){
			string str = temp;
			t.clear();
			do {
				t.push_back(str);
			}while (next_permutation(str.begin(), str.end()));
			sort(t.begin(), t.end());
			int len = t.size();
			for (int i = len - 1; i > 0; --i){
				int val = atoi(t[i].c_str());
				if (prim[val] == 0){
					prln(val);
					return 0;
				}
			}
			temp.pop_back();
		}

	}
	
    return 0;
}
