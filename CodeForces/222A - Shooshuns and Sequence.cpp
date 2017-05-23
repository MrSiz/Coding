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
#include <unordered_map>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}


int main()
{
    //file();
    int n, k;
    scanf("%d%d", &n, &k);
    deque<int> que;
    unordered_map<int, int> mm;
    int temp;
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        mm[temp]++;
        que.push_back(temp);
    }
    cnt = mm.size();
    int ans = 0;
    while (cnt > 1){
        int t = que.front();
        int temp = que[k - 1];
        if (ans > n){
            printf("-1\n");
            return 0;
        }else{
            mm[t]--;
            mm[temp]++;
            if (mm[t] == 0)
                --cnt;
            que.push_back(temp);
            que.pop_front();
            ++ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}
