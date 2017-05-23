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
string str[51];

int main()
{
    file();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        cin >> str[i];
    }
    int ans = INT_MAX;
    for (int i = 1; i <= n; ++i){
        int t = 0;
        for (int j = 1; j <= n; ++j){
            if (i != j){
                string temp = str[j] + str[j];
                int pos = temp.find(str[i]);
                if (pos == string::npos){
                    cout << "-1";
                    return 0;
                }
                t += pos;
            }
        }
        ans = min(t, ans);
    }
    printf("%d\n", ans);
    return 0;
}
