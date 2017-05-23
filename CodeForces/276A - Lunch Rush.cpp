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
struct Node{
    int f, t;
    int j;
}node[10005];

int main()
{
    //file();
    int n, k;
    scanf("%d%d", &n, &k);
    int happy = INT_MIN;
    int f, t;
    for (int i = 1; i <= n; ++i){
        scanf("%d%d", &f, &t);
        if (t <= k){
            happy = max(happy, f);
        }else{
            happy = max(happy, f - (t - k));
        }
    }
    printf("%d\n", happy);
    return 0;
}
