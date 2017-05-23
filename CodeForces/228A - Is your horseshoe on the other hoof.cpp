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

int main()
{
    set<int> ans;
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    ans.insert(a);
    ans.insert(b);
    ans.insert(c);
    ans.insert(d);
    printf("%d\n", 4 - ans.size());
    return 0;
}
