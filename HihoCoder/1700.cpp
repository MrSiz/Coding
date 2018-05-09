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


int arr[] = {0,17,34,51,68,85,102,119,136,153,170,187,204,221,238,255};

int a, b, c;
int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	// pr("Te");
	scanf("#%2x%2x%2x", &a, &b, &c);
	printf("#");
	int diff = INT_MAX;
	int ans = -1;
	for (int i = 0;i < 16; ++i) {
		int t = abs(a - arr[i]);
		// int ans = -1;
		if (t < diff) {
			diff = t;
			ans = arr[i];
		}
	}
	printf("%x", ans / 16);
	diff = INT_MAX;
	ans = -1;
	for (int i = 0;i < 16; ++i) {
		int t = abs(b - arr[i]);
		if (t < diff) {
			diff = t;
			ans = arr[i];
		}
	}
	printf("%x", ans / 16);
	diff = INT_MAX;
	ans = -1;
	for (int i = 0;i < 16; ++i) {
		int t = abs(c - arr[i]);
		if (t < diff) {
			diff = t;
			ans = arr[i];
		}
	}
	printf("%x\n", ans / 16);

    return 0;
}