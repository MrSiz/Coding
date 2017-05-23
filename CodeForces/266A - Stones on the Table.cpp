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
char arr[51];

int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", arr);
    int cnt = 0;
    int i = 0;
    while (i < n){
        char ch = arr[i];
        while (i + 1 < n && arr[i + 1] == arr[i]){
            ++cnt;
            ++i;
            continue;
        }
        ++i;
    }
    printf("%d\n", cnt);
    return 0;
}
