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
const int MAXN = 1e5 + 5;
int tree[MAXN];
int N;
int lowbit(int x)
{
	return x & (-x);
}

void add(int a, int b)
{
	while (a <= N){
		tree[a] += 1;
		a += lowbit(a);
	}
	b += 1;
	while (b <= N){
		tree[b] -= 1;
		b += lowbit(b); 
	}
}


int query(int x)
{
	int ans = 0;
	while (x){
		ans += tree[x];
		x -= lowbit(x);
	}
	return ans;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	// int N;
	while (scanf("%d", &N), N){
		int a, b;
		memset(tree, 0, sizeof(tree));
		for (int i = 0; i < N; ++i){
			scanf("%d%d", &a, &b);
			add(a, b);
		}
		for (int i = 0; i < N; ++i){
			printf("%d%c", query(i + 1), i == N - 1 ? '\n' : ' ');
		}
	}
    return 0;
}
