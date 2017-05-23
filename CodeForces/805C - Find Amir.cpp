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
    int n;
    scanf("%d", &n);
    if (n % 2 == 0){
        cout << (n / 2) - 1 << endl;
    }else{
        cout << n / 2 << endl;
    }
    return 0;
}