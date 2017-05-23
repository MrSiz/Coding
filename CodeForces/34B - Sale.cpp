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
    //file();
    int n, m;
    scanf("%d%d", &n, &m);
    multiset<int, less<int>> temp;
    int t;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &t);
        if (t < 0)
            temp.insert(t);
    }
    int sum = 0;
    for (const auto& elem : temp){
        if (m){
            sum += elem;
        }else
            break;
        --m;
    }
    printf("%d\n", -sum);
    return 0;
}
