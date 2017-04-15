#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}
const int MAXN = 1005;
struct Node{
    int st, ed, ef;
    bool operator < (const Node& rhs)const {
        return st < rhs.st;
    }
}node[MAXN];
int dp[1005];

int main()
{
    //file();
    int N, M, R;
    scanf("%d%d%d", &N, &M, &R);
    for (int i = 1; i <= M; ++i){
        scanf("%d%d%d", &node[i].st, &node[i].ed, &node[i].ef);
        node[i].ed += R;
    }
    sort(node + 1, node + 1 + M);
    for (int i = 1; i <= M; ++i){
        dp[i] = node[i].ef;
        for (int j = 1; j < i; ++j){
            if (node[j].ed <= node[i].st){
                dp[i] = max(dp[i], dp[j] + node[i].ef);
            }
        }
    }
    int ans = INT_MIN;
    for (int i = 1; i <= M; ++i){
        if (dp[i] > ans){
            ans = dp[i];
        }
    }
    cout << ans << endl;
    return 0;
}
