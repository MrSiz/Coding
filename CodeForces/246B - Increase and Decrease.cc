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
    int sum = 0;
    int temp;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        sum += temp;
    }
    if (sum % n == 0)
        printf("%d\n", n);
    else{
        printf("%d\n", n - 1);
    }
    return 0;
}
