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
#define pr(x) (cout << #x << ' ' << x)
#define prln(x) (cout << #x << ' ' << x << endl)


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    char st, ed;
    scanf("%c %c", &st, &ed);
    int n;
    scanf("%d",&n);
    char str[] = "v<^>";
    n %= 4;
    int ss, ee;
    for (int i = 0; i <4; ++i){
        if (str[i] == st){
            ss = i;
        }
        if (str[i] == ed)
            ee = i;
    }
    //pr(st);prln(ed);
    if (str[(ss + 4 + n) % 4] == ed && str[(ee + 4 + n) % 4] == st)
        cout << "undefined\n";
    else if (str[(ss + 4 + n) % 4] == ed)
        cout << "cw\n";
    else
        cout << "ccw\n";
    return 0;
}