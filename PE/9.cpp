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
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    for (int i = 1; i <= 1000; ++i){
        for (int j = i + 1; j <= 1000; ++j){
            int t_val = 1000 - i - j;
            if (t_val * t_val == i * i + j * j){
                cout << i * j * t_val << endl;
                return 0;
            }
        }
    }
    return 0;
}
