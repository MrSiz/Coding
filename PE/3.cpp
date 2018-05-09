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

const int MAXN = 4 * 1e6;

int arr[MAXN];
int cnt = 0;
void prim()
{
    for (int i = 2; i <= MAXN; ++i){
        if (arr[i] == 0){
            for (int j = i + i; j <= MAXN; j += i){
                arr[j] = 1;
            }
        }
    }
    cnt = 0;
    //prln(cnt);
    for (int i = 2; i <= MAXN; ++i){
        if (arr[i] == 0){
            arr[cnt++] = i;
            //cout << i << endl;
        }
    }
    return ;
}


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    prim();
    //c//out << arr[1] << endl;
    ll val = 600851475143;
    int ans;
    //cout << arr[0] << endl;
    //cout << "hh" << endl;
    while (val != 1){
        for (int i = 0; i < cnt; ++i){
      //      cout <<arr[i] << endl;
            while (val % arr[i] == 0){
                val /= arr[i];
                ans = arr[i];
            }
        //    cout << val << endl;
            if (val == 1)
                break;
        }
    }
    cout << ans;
    return 0;
}
