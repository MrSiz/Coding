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
bool arr[MAXN];

void init()
{
	int i = 1;
	while (true){
		int sum = i * (i + 1) / 2;
		if (sum > MAXN) 
			break;
		arr[sum] = 1;
		++i;
	}
	return ;
}


bool isTriangle(const string &str)
{
	int len = str.size();
	int sum = 0;
	for (int i = 0; i < len; ++i){
		int temp;
		if ((str[i] >= 'A' && str[i] <= 'Z')){
			temp = str[i] - 'A' + 1;
		}else if ((str[i] >= 'a' && str[i] <= 'z')){
			temp = str[i] - 'a' + 1;
		}
		sum += temp;
	}
	if (arr[sum] == 1){
		return true;
	}
	return false;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		// freopen("out.txt", "w", stdout);
	#endif
	init();
	string str;
	int cnt = 0;
	while (getline(cin, str)){
		int len = str.size();
		int i = 0;
		while (i < len){
			while (i < len && !((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
				++i;
			string temp;
			while (i < len && str[i] != '"'){
				temp.push_back(str[i]);
				++i;
			}
			if (isTriangle(temp)){
				prln(temp);
				++cnt;
			}
		}
		prln(i);
	}
	prln(cnt);
    return 0;
}
