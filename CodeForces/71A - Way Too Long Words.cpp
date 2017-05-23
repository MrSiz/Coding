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
    for (int i = 1; i <= n; ++i){
        string str;
        cin >> str;
        int length = str.size();
        if (length > 10){
            printf("%c%d%c\n", str[0], length - 2, str[length - 1]);
        }else{
            cout << str << endl;
        }
    }
    return 0;
}
