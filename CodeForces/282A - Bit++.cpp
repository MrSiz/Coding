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
    int ans = 0;
    string str;
    for (int i = 1; i <= n; ++i){
        cin >> str;
        int length = str.size();
        if (str[0] == '+')
            ++ans;
        else if (str[0] == '-')
            --ans;
        else if (str[length -1] == '+')
            ++ans;
        else if (str[length - 1] == '-')
            --ans;
    }
    printf("%d\n", ans);
    return 0;
}
