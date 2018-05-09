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
	const int MAXN = 10000;
	priority_queue<int> que;
	for (int i = 1; i < MAXN; ++i){
		string temp;
		int j = 1;
		while (temp.size() < 9){
			int t = i * j;
			temp.append(to_string(t));
			++j;
		}
		// prln(i);
		int len = temp.size();
		if (len != 9){
			continue;
		}else {
			prln(len);
			int cnt[10] = {0};
			bool flag = true;
			for (int k = 0; k < len; ++k){
				++cnt[temp[k] - '0'];
			}
			for (int k = 1; k < 10; ++k){
		/*		if (i == 192){
					pr(k);prln(cnt[k]);
				}*/
				if (cnt[k] > 1 || cnt[k] == 0){
					flag = false;
				}
			}
			if (flag){
				// pr(flag);prln(temp);
				que.push(atoi(temp.c_str()));
			}
		}
	}	
	prln(que.size());
	if (que.size() > 1)
		cout << que.top() << endl;
    return 0;
}
