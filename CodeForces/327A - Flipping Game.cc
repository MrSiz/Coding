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

int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    int cnt_zero = 0, max_val = -1, one_cnt = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        if (temp == 1){
            one_cnt++;
            cnt_zero--;
        }else if (temp == 0){
            cnt_zero++;
        }
        if (cnt_zero > max_val)
            max_val = cnt_zero;
        if (cnt_zero < 0)
            cnt_zero = 0;
    }
    printf("%d\n", one_cnt + max_val);
    return 0;
}
