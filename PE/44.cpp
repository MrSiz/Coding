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

const int MAXN = 1e8;
bool arr[MAXN];
int max_val = -1;
int a[MAXN];
int cnt = 0;
void init()
{
    for (int i = 1; i < MAXN; ++i){
        int temp = i * (3 * i - 1) / 2;

        if (temp < MAXN){
            arr[temp] = 1;
            a[cnt++] = temp;
            prln(a[cnt - 1]);
            if (temp > max_val)
                max_val = temp;
        }
        else
            break;
    }
    return ;
}



bool judge(int a, int b)
{
    if (arr[abs(a - b)] && arr[a + b]){
        return true;
    }
    return false;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    init();
    int ans = MAXN;
    int pre = 1;
    for (int i = 0; i < cnt; ++i){
        for (int j = i + 1; j < cnt; ++j){
            if (judge(a[i], a[j])){
                int diff = abs(a[i] - a[j]);
                if (diff < ans){
                    ans = diff;
                }
            }
        }
    }
    prln(ans);
    return 0;
}
