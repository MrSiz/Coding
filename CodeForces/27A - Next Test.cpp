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
bool flag[3005];

int main()
{
    int n;
    scanf("%d", &n);
    int temp;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        flag[temp] = 1;
    }
    for (int i = 1; i <= 3001; ++i){
        if (flag[i] == 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
