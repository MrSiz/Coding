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
int a[55], b[55];

int main()
{
    //file();
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i){
        scanf("%d", &b[i]);
    }
    unordered_map<int, int> mm;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            if (b[j] % a[i] == 0){
                mm[b[j] / a[i]]++;
            }
        }
    }
    int max_val = INT_MIN, index = -1;
    for (const auto& elem : mm){
        if (elem.first > index){
            max_val = elem.second;
            index = elem.first;
        }
    }
    printf("%d\n", max_val);
    return 0;
}
