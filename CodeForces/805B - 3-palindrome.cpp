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
const int MAXN = 2 * 1e5 + 5;
char arr[MAXN];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        if (i == 1){
            cout << 'a';
            arr[i] = 'a';
            continue;
        }else if (i == 2){
            cout << 'b';
            arr[i] = 'b';
            continue;
        }else if (arr[i -2] == 'a'){
            cout << 'b';
            arr[i] = 'b';
         continue;
        }else if (arr[i - 2] == 'b'){
            cout << 'a';
            arr[i] = 'a';
            continue;
        }
    }
    return 0;
}