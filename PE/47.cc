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
const int MAXN = 1e4 + 5;

bool vis[MAXN];
bool prim[MAXN];
int arr[2000];
int cnt;

void init()
{
	for (int i = 2; i < MAXN; ++i){
		if (prim[i] == 0){
			for (int j = i + i; j < MAXN; j += i){
				prim[j] = 1;
			}
		}
	}
	prln("hele");
	for (int i = 2; i < MAXN; ++i){
		if (prim[i] == 0){
			arr[cnt++] = i;
		}
	}
	prln("ene");
	return ;
}

int cal(int n)
{
	int nod = 0;
	bool pf;
	int r = n;

	for (int i = 0; i < cnt; ++i){
		pf = false;

		while (r % arr[i] == 0){
			pf = true;
			r /= arr[i];
		}
		if (pf)
			++nod;
		if (r == 1){
			return nod;
		}
	}
	return nod;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	init();
	int st = 2 * 3 * 5 * 7;
	int con = 1;
	while (con < 4){
		st++;
		if (cal(st) == 4){
			++con;
		}else{
			con = 0;
		}
	}
	cout << st - 3 << endl;
    return 0;
}
