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

const int MAXN = 1e6;

int func(ll start){

          ll b = start;
            int cnt = 0;
//            cout <<"now " << b << endl;
            while (b != 1){
                    if (b & 1){
                        b = b * 3 + 1;
                    }else{
                        b >>= 1;
                    }
                    ++cnt;
                   // cout << b << endl;
            }
//            prln(b);
            return cnt;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    ll start = MAXN;
    int ans = 0;
    int val;
    while (start >= 1){
        int t = func(start);
        if (ans < t){
            val = start;
            ans = t;
        }
        //cout << ans << endl;
        --start;
        //cout << start << endl;
    }
//999167
//    ll test = 999167;
//    while (test != 1){
//
//        if (test & 1){
//            test = test * 3 + 1;
//        }else{
//            test >>= 1;
//        }
//        cout << test << endl;
//    }
//    cout << test << endl;
    cout << ans << endl;
    prln(val);
    return 0;
}
