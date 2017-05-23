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
    string str;
    int n, t;
    scanf("%d%d", &n, &t);
    cin >> str;
    while (t--){
        for (int i = 0; i < n; ++i){
            if (i + 1 < n && str[i] == 'B' && str[i + 1] == 'G'){
                swap(str[i], str[i + 1]);
                ++i;
            }
        }
    }
    cout << str << endl;
    return 0;
}
