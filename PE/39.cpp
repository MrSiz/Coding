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

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	int max_cnt = -1, ans = 0;
	for (int p = 1000; p >= 2; --p){
		int cnt = 0;
		for (int i = 1; i < p; ++i){
			for (int j = i + 1; j < p; ++j){
				int k = p - i - j;
				if (k > 0 && i + j > k && i + k > j && k + j > i){
					if (k * k + j * j == i * i){
						++cnt;
					}else if (k * k + i * i == j * j){
						++cnt;
					}else if (i * i + j * j == k * k){
						++cnt;
					}
				}
			}
		}
		if (cnt > max_cnt){
			max_cnt = cnt;
			ans = p;
		}	
	}
	pr(ans);prln(max_cnt);
    return 0;
}
