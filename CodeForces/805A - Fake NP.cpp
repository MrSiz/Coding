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

void file()
{
    freopen("in.txt", "r", stdin);
}
const int MAXN = 2 * 1e5 + 5;
char arr[MAXN];

int main()
{
    int l, r;
    scanf("%d%d", &l, &r);
    if (l == r){
        cout << l << endl;
    }else{
        cout << 2 << endl;
    }
    return 0;
}