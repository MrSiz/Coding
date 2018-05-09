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

bool isDiv(const string &str, int n)
{
	return atoi(str.c_str()) % n == 0;
}


int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	
	string str = "0123456789";
	unsigned long long sum = 0;
	do {
		if (isDiv(str.substr(1, 3), 2)
			&& isDiv(str.substr(2, 3), 3)
			&& isDiv(str.substr(3, 3), 5)
			&& isDiv(str.substr(4, 3), 7)
			&& isDiv(str.substr(5, 3), 11)
			&& isDiv(str.substr(6, 3), 13)
			&& isDiv(str.substr(7, 3), 17)){
				prln(str);
				sum += atol(str.c_str());
				//prln(sum);
			}
		// prln(str);
	}while (next_permutation(str.begin(), str.end()));
	prln(sum);
    return 0;
}
