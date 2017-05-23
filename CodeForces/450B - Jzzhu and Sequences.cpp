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
const int MODE = 1e9 + 7;
int main()
{
    //file();
    int x, y;
    ll n;
    scanf("%d%d%I64d", &x, &y, &n);
    ll arr[7];
    arr[1] = x, arr[2] = y, arr[3] = (y - x) % MODE;
    arr[4] = -x, arr[5] = -y, arr[6] = (x - y) % MODE;
    //cout << arr[2] << endl;
    prln(n % 6);
    int temp = n % 6;
    if (temp != 0)
        printf("%d\n", (arr[temp] + MODE) % MODE);
    else{
        prln(arr[6]);
        printf("%d\n", (arr[6] + MODE) % MODE);
    }
    return 0;
}
