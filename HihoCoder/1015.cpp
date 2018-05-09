#include <iostream>
#include <string>
#include <cstring>


using namespace std;

int pos[10004];
char s[1000006];
char p[10004];


void get_next(int length)
{
	int i = 0;
	pos[0] = -1;
	int j = -1;
	while (i < length){
		if (j == -1 || p[j] == p[i]){
			++i;
			++j;
			if (p[j] != p[i])
				pos[i] = j;
			else
				pos[i] = pos[j];
		}else{
			j = pos[j];
		}
	}
	return ;
}

int kmp()
{
	int cnt = 0;
	int i = 0, j = 0;
	int length = strlen(s);
	int length2 = strlen(p);
	while (i < length){
		if (j == -1 || s[i] == p[j]){
			++i;
			++j;
		}else{
			j = pos[j];
		}
		if (j == length2){
			++cnt;
			j = pos[j];
		}
	}
	return cnt;
}


int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i){
		cin >> p;
		cin >> s;
		get_next(strlen(p));
		int ans = kmp();
		cout << ans << endl;
	}
}