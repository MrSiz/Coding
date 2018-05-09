//参考官方给的解法

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


inline bool judge(int sum)
{
    int res = 0;
    int temp = sum;
    while (sum){
        res *= 10;
        res += sum % 10;
        sum /= 10;
    }
    return temp == res;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int res = -1;
    int a = 999;
    while (a >= 100){
        int b, db;
        if (a % 11 == 0){
            b = 999;
            db = 1;
        }else{
            b = 990;
            db = 11;
        }
        while (b >= a){
            if (a * b <= res)
                break;
            if (judge(a * b)){
                res = a * b;
            }
            b -= db;
        }
        --a;
    }
    cout << res << endl;
    return 0;
}
