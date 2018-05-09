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
const int MAXN = 2 * 1e6;
int arr[MAXN];


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL

    for (int i = 2; i <= MAXN; ++i){
        if (arr[i] == 0){
            for (int j = i + i; j <= MAXN; j += i){
                arr[j] = 1;
            }
        }
    }
//    vector<int> ans;
    ll sum = 0;
    for (int i = 2; i <= MAXN; ++i){
        if (arr[i] == 0){
            //prln(i);
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}
