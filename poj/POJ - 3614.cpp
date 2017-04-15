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
const int MAXN = 2505;
struct Node{
    int st, ed;
}node[MAXN], sp[MAXN];

bool cmp(const Node& a, const Node& b){
    return a.st < b.st;
}

int main()
{
   // file();
    int C, L;
    scanf("%d%d", &C, &L);
    for (int i = 1; i <= C; ++i){
        scanf("%d%d", &node[i].st, &node[i].ed);
    }
    for (int i = 1; i <= L; ++i){
        scanf("%d%d", &sp[i].st, &sp[i].ed);
    }
    sort(node + 1, node + 1 +C, cmp);
    sort(sp + 1, sp + 1 + L, cmp);
    int index = 1, ans = 0;
    priority_queue<int, vector<int>, greater<int> > que;
    for (int i = 1; i <= L; ++i){
        while (node[index].st <= sp[i].st && index <= C){
            que.push(node[index++].ed);
        }
        while (sp[i].ed && !que.empty()){
            if (que.top() >= sp[i].st){
                ++ans;
                --sp[i].ed;
            }
            que.pop();
        }
    }
    cout << ans << endl;
    return 0;
}
