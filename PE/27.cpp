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

struct ANS{
    int a, b;
    int length;
}ans;

int prim[1005];
int arr[1005];
int cnt;

void init()
{
    for (int i = 2; i < 1005; ++i){
        if (prim[i] == 0){
            for (int j = i + i; j < 1005; j += i){
                prim[j] = 1;
            }
        }
    }

    for (int i = 2; i < 1000; ++i){
        if (prim[i] == 0){
            arr[cnt++] = i;
        }
    }
    return ;
}

bool is_prim(int n)
{
    int t = sqrt(n);
    for (int i = 2; i <= t; ++i){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    init();
    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i){
        for (int j = -999; j < 1000; ++j){
            for (int k = 0;; ++k){
                int val = k *k + j * k + arr[i];
                prln(val);
                val = abs(val);
                if (!is_prim(val)){
                    break;
                }else{
                    if (k + 1 > ans.length){
                        ans.length = k + 1;
                        ans.a = j;
                        ans.b = arr[i];
                    }
                }
                prln(k);
            }
//            prln(j);
        }
//        cout <<"-------------i = " << i << endl;
    }
    cout << "end\n";

    cout << ans.length << endl;
    cout << ans.a * ans .b << endl;
    return 0;
}
