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

int m[13] = {0, 31, 28, 31, 30,
            31, 30, 31, 31, 30,
            31, 30, 31};

inline void judge(const int &year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        m[2] = 29;
    }else{
        m[2] = 28;
    }
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int ans = 0;
    int val = 1;
    for (int i = 1901; i <= 2000; ++i){
        judge(i);
        for (int j = 1; j <= 12; ++j){
            val = (val + m[j]) % 7;
            val == 5 ? ++ans : 0;
        }
    }
    prln(ans);
    return 0;
}
