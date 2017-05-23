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
const int MAXN = 1e5 + 5;
int arr[MAXN];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;
    bool f_2 = false, f_1 = false;
    for (int i = 0; i < n; ++i){
        if (arr[i] == i){
            ++cnt;
        }else{
            if (arr[arr[i]] == i)
                f_2 = true;
            else
                f_1 = true;
        }
    }
    if (f_2)
        printf("%d\n", cnt + 2);
    else if (f_1)
        printf("%d\n", cnt + 1);
    else
        printf("%d\n", cnt);
    return 0;
}
