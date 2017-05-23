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
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ans = 0;
    int temp;
    int sum = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        sum += temp;
    }
    //cout << sum << endl;
    for (int i = 1; i <= 5; ++i){
        int ttt = ((i + sum) % (n + 1));
       //cout <<ttt << endl;
        if (ttt != 1)
            ++ans;
    }
    printf("%d\n", ans);
    return 0;
}
