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
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
int pre[1002],now[1002];

int main()
{
    //file();
    int n;
    scanf("%d", &n);
    bool flag = false;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d\n", &pre[i], &now[i]);
        if (pre[i] != now[i]){
            flag = true;
        }
    }
    int cnt = 0;
    for (int i = 1; i < n; ++i){
        if (pre[i] >= pre[i + 1]){
            //pr(pre[i]);
            ++cnt;
        }
    }
    //prln(cnt);
    if ((cnt == (n - 1)) && flag == false)
        return puts("maybe");
    else if (flag)
        return puts("rated");
    else
        return puts("unrated");
    return 0;
}