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
	unsigned i, j;
	const unsigned long long MOD = 1e10;
	unsigned long long sum = 0, t;

	for (i =  1; i <= 1000; ++i){
		t = 1;
		for (j = 1; j <= i; ++j){
			t *= i;
			t %= MOD;
		}
		sum += t;
	}	
	cout << sum % MOD << endl;
    return 0;
}
