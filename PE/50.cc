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

const int MAXN = 1e6 + 1;
bool p[MAXN];
int arr[90000];
long long sum[90000];
int cnt;

void init()
{
	for (int i = 2; i < MAXN; ++i){
		if (p[i] == 0){
			for (int j = i + i; j < MAXN; j += i){
				p[j] = 1;
			}
		}
	}
	prln("hrere");
	for (int i = 2; i < MAXN; ++i){
		if (p[i] == 0){
			arr[cnt++] = i;
		}
	}
	prln(cnt);
	return ;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	init();
	sum[0] = arr[0];
	for (int i = 1; i < cnt; ++i){
		sum[i] = sum[i - 1] + arr[i];
	}
	ll res, max_len = 0;
	for (int i = 0; i < cnt; ++i){
		for (int j = i - 1 - max_len; j >= 0; --j){
			if (sum[i] > 1e6){
				break;
			}
			int t = sum[i] - sum[j];
			if (i - j + 1 > max_len && p[t] == 0){
				max_len = i - j + 1;
				res = sum[i] - sum[j]; 
			}
		}
	}
	pr(max_len);prln(res);
    return 0;
}
