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

const int MAXN = 1e6;

ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a % b);
}



ll c(ll n, ll r)
{
	int res = 1;
	for (int i = 1; i <= r; ++i){
		int t = gcd(n, i);
		res /= i / t;
		res *= n / t;
		--n;
	}
	return res;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	ll cnt = 0;
	for (int i = 23; i <= 100; ++i){
		for (int j = 1; j <= i; ++j){
			if (c(i, j) > MAXN){
				cnt += i - 2 * (j - 1) - 1;
				break;
			}
		}
	}
	prln(cnt);
    return 0;
}
