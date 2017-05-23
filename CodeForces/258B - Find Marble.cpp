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
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long longac

void file()
{
    freopen("in.txt", "r", stdin);
}
const int MAXN = 1e5 + 5;
int arr[MAXN];

int main()
{
    int n;
    int s, t;
	scanf("%d%d%d", &n, &s, &t);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    if (s == t)
        return puts("0");
    int cnt = 0;
    while (arr[s] != s){
        ++cnt;
        s = arr[s];
        prln(s);
        if (s == t || cnt > n)
            break;
    }
    if (s == t && cnt <= n){
        printf("%d\n", cnt);
    }else{
        puts("-1");
    }
    return 0;
}
