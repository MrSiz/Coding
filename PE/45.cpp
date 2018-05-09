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

const ll MAXN = 2e9;

short cnt[MAXN];


int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	memset(cnt, 0, sizeof(cnt));
	ll i = 0;
	while (++i){
		ll T = i * (1 + i) / 2;
		if (T > MAXN)
			break;
		cnt[T]++;
		prln("zz");
		if (cnt[T] >= 3 && T > 40755)
		{
			prln(cnt[T]);
			cout << T << endl;
			return 0;
		}
		prln("nwe");
		ll P = i * (3 * i - 1) / 2;
		if (P > MAXN){
			continue;
		}
		cnt[P]++;
		prln("hh");
		if (cnt[P] >= 3 && P > 40755 ){
			cout << P << endl;
			return 0;
		}
		ll H = i * (i * 2 - 1);
		if (H > MAXN){
			continue;
		}
		cnt[H]++;
		prln("yy");
		if (cnt[H] >= 3 && H != 40755 && H != 1){
			cout << H << endl;
			return 0;
		}
	}
	prln("here");
    return 0;
}
