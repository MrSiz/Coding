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
int arr[101];

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    deque<int> index;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
        index.push_back(i);
    }
    int ans = -1;
    if (n == 1){
        return puts("1");
    }
    while (!index.empty()){
        int t = index.front();

        index.pop_front();
        if (m >= arr[t]){
            n--;
            if (n == 1)
                ans = index.front();
            continue;
        }
        arr[t] -= m;
        index.push_back(t);
    }
    printf("%d\n", ans);
    return 0;
}
