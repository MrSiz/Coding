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
    int n;
    scanf("%d", &n);
    int ans = 0, val = INT_MAX;
    bool flag = false;
    int temp;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        if (temp < val){
            val = temp;
            flag = false;
            ans = i;
        }else if (temp == val){
            flag = true;
        }
    }
    if (flag){
        puts("Still Rozdil");
    }else
        printf("%d\n", ans);
    return 0;
}
