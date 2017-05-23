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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
const int MAXN = 1e5 + 5;
const int TT = 1e7 + 5;
int arr[TT];
int main()
{
    int t = sqrt(TT);
    for (int i = 2; i <= t; ++i){
        if (arr[i] == 0){
            for (int j = i * i; j <= TT; j += i){
                arr[j] = 1;
            }
        }

    }
    int cnt = 0;
    for (int j = 2; j <= TT; ++j){
        if (arr[j] == 0){
            arr[cnt] = j;
            pr(j);pr(cnt);prln(arr[cnt]);
            ++cnt;
        }
    }
    int n;
    //prln(arr[2]);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
