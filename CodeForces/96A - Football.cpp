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
int arr[105];
char str[105];

int main()
{
    scanf("%s", str + 1);
    bool flag = true;
    int length = strlen(str + 1);
    prln(length);
    for (int i = 1; i <= length; ++i){
        pr(str[i]);prln(str[i - 1]);
        if (str[i] == str[i - 1]){
            prln(arr[i - 1]);
            arr[i] += arr[i - 1] + 1;
        }

        else
            arr[i] = 1;
        if (arr[i] >= 7)
            flag = false;
       // prln(arr[i]);
    }
    if (flag)
        puts("NO");
    else
        puts("YES");
    return 0;
}
