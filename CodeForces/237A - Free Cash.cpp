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
    unordered_map<int, int> mm;
    int h, m;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &h, &m);
        m += h * 360;
        mm[m]++;
    }
    int max_val = INT_MIN;
    for (const auto& elem : mm){
        if (elem.second > max_val){
            max_val = elem.second;
        }
    }
    printf("%d\n", max_val);
    return 0;
}
