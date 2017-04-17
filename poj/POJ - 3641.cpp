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
typedef long long ll;
typedef unsigned long long ull;
int cnt;
void file()
{
	freopen("in.txt", "r", stdin);
}

const int MAXN = 1000000001;
bool flag[MAXN];

ull quick_pow(ull a, ull b, ull c) {
	ull ans = 1;
	while (b) {
		if (b & 1) {
			ans = (ans * a) % c;
		}
		a = (a * a) % c;
		b >>= 1;
	}
	//puts("-=====");
	//prln(cnt++);
	return ans;
}
bool judge(ull a) {
	ull temp = sqrt(a);
	for (ull i = 2; i <= temp; ++i) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{

	ull p, a;
	// prln(1);
	while (cin >> p >> a && p && a) {
		if (judge(p) == 1) {
			//prln(1);
			puts("no");
		}
		else if (quick_pow(a, p, p) == (a % p)) {
			//prln(a % p);
			puts("yes");
		}
		else {
			puts("no");
		}
	}
	return 0;
}
