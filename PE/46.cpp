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
int p[MAXN];
int cnt;

void init()
{
	prln("sss");
	for (int i = 2; i < MAXN; ++i){
		if (p[i] == 0){
			for (int j = i + i; j < MAXN; j += i){
				p[j] = 1;
			}
		}
	}
	prln("middle");
	for (int i = 2; i < MAXN; ++i){
		if (p[i] == 0){
			p[cnt++] = i;
			prln(p[cnt - 1]);
		}
	}
	prln("end");
}


int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	init();
	int k = 35;
	prln("start");
	prln(cnt);
	while (k < 6000){
			bool flag = true;
			for (int i = 0; i < cnt; ++i){
				if (p[i] > k){
					break;
				}else {
					int t = k - p[i];
					pr(k);pr(p[i]);prln(t);
					if (t & 1){
						//flag = false;
						continue;
					}else {
						t /= 2;
						double temp = sqrt(t);
						prln(temp);
						if (fabs(temp - int(temp)) < eps){
							flag = false;
							break;
						}
					}
				}
			}
			if (flag){
				cout << "ans " << k << endl;
				return 0;
			}
		//																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
		
		//prln(k);
		k += 2;
	}
    return 0;
}
