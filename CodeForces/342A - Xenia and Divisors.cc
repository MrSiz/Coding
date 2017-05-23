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
    unordered_map<int, int> mm;
    int temp;
    scanf("%d", &n);
    bool flag = true;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        mm[temp]++;
        if (temp == 5 || temp == 7)
            flag = false;
    }
    if (flag == false || mm[1] != (n / 3)
        || mm[6] < mm[3] || (mm[2] + mm[3]) != (mm[6] + mm[4]))
        return puts("-1\n");
    for (int i = 1; i <= mm[4]; ++i)
        printf("1 2 4\n");
    for (int i = 1; i <= mm[2] - mm[4]; ++i)
        printf("1 2 6\n");
    for (int i = 1; i <= mm[3]; ++i)
        printf("1 3 6\n");
    return 0;
}
