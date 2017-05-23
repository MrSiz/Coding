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
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    //file();
    int n;
    int l_cnt = 0, r_cnt = 0;
    int l, r;
    scanf("%d", &n);
    int cnt = 0;

    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &l, &r);
        if (((l % 2 == 0) && (r % 2 == 0))){
            continue;
        }
        l_cnt += l, r_cnt += r;
        if (!((l % 2 == 1) && (r % 2 == 1))){
            cnt++;
            pr(l);prln(r);
        }
    }
    prln(l_cnt);
    prln(r_cnt);
    prln(cnt);
    if ((l_cnt % 2)== 0 && (r_cnt % 2) == 0){
        puts("0");
    }else if (cnt >= 2 && (l_cnt % 2 == 1 && r_cnt % 2 == 1)){
        printf("%d\n", 1);
    }else{
        puts("-1");
    }
    return 0;
}
