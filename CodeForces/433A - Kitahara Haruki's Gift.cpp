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

int arr[101];

int main()
{
    //file();
    int n;
    scanf("%d", &n);
    int temp;
    int sum = 0;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        arr[temp / 100]++;
        sum += temp / 100;
    }
    //prln(sum);
    if ((sum & 1) || ((arr[2] & 1) && (arr[1] & 1)) || (arr[1] == 0 && (arr[2] & 1)))
        puts("NO");
    else
        puts("YES");
    return 0;
}
