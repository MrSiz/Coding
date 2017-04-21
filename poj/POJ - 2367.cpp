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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}
vector<int> g[101];
int num[101];
queue<int> que;
int ans[101];

int main()
{
    //file();
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i){
        int n;
        while (scanf("%d", &n) && n){
            g[i].push_back(n);
            num[n]++;
        }
    }
    for (int i = 1; i <= N; ++i){
        prln(num[i]);
        if (num[i] == 0){
            que.push(i);
        }
    }
    int cnt = 0;
    while (!que.empty()){
        int temp = que.front();
        ans[cnt++] = temp;
        prln(ans[cnt - 1]);
        que.pop();
        int length = g[temp].size();
        for (int i = 0; i < length; ++i){
            int index = g[temp][i];
            num[index]--;
            if (num[index] == 0){
                que.push(index);
            }
        }
    }
    for (int i = 0; i < cnt; ++i){
        if (i != cnt - 1){
            printf("%d ", ans[i]);
        }else {
            printf("%d", ans[i]);
        }
    }
    return 0;
}
