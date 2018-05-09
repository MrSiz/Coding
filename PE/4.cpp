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


inline bool judge(int elem)
{
    int res = 0;
    int temp = elem;
    while (elem){
        res *= 10;
        res += elem % 10;
        elem /= 10;
    }
    //prln(res);
    //prln(temp);
    return temp == res;
}


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int res = -1;
    bool flag = false;
    for (int i = 999; i >= 100; --i){
        for (int j = 999; j >= 100; --j){ //因为重复计算了，所以可以设置 j = a;
            int sum = i * j;
            if (judge(sum)){
                res = max(sum, res);
                //break;
            }
        }
//        if (flag) break;
    }
    cout << res << endl;
    return 0;
}
