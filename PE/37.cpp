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
bool p[MAXN];
char arr[100];
void init()
{
	p[0] = p[1] = 1;
	for (int i = 2; i < MAXN; ++i){
		if (p[i] == 0){
			for (int j = i + i; j < MAXN; j += i){
				p[j] = 1;
			}
		}
	}
	return ;
}


bool rtol(int n)
{
	while (n){
		if (p[n] == 1){
			return false;
		}
		n /= 10;
	}
	return true;
}


bool ltor(int n)
{
	int len = 0;
	while (n){
		arr[len++] = n % 10 + '0';
		n /= 10;
	}	
	for (int i = len - 1; i >= 0; --i){
		int j = i;
		int val = 0;
		while (j >= 0){
			val = val * 10 + (arr[j--] - '0');
		}
		if (p[val] == 1){
			return false;
		}
	}
	return true;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	init();
	int cnt = 0;
	int i = 10, sum = 0;
	while (cnt < 11){
		if (rtol(i) && ltor(i)){
			sum += i;
			++cnt;
			prln(i);
		}
		++i;
	}
	cout << sum << endl;
    return 0;
}
