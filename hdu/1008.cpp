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
    int N;
    while (cin >> N && N){
        int val;
        int sum = 0, pre = 0;
        for (int i = 1; i <= N; ++i){
            cin >> val;
            if (val > pre){
                sum += (val - pre) * 6 + 5;
            }else if (val == pre){
                sum += 5;
            }else if (val < pre){
                sum += (pre - val) * 4 + 5;
            }
            pre = val;
        }
        cout << sum << endl;
    }
    return 0;
}
