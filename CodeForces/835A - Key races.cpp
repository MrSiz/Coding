#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INT 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int s, v1, v2,t1,t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int ans1 = 2 * t1 + s * v1;
    int ans2 = 2 * t2 + s * v2;
    if (ans1 < ans2)
        puts("First");
    else if (ans1 > ans2)
        puts("Second");
    else
        puts("Friendship");
    return 0;
}