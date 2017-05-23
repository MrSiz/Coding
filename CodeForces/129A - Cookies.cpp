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
    int n;
    int o = 0, e = 0;
    int sum = 0;
    scanf("%d", &n);
    int temp;
    for (int i = 0; i < n; ++i){
        scanf("%d", &temp);
        sum += temp;
        if (temp & 1)
            o++;
        else
            e++;
    }
    if (sum % 2 == 0)
        printf("%d\n", e);
    else
        printf("%d\n", o);
    return 0;
}
