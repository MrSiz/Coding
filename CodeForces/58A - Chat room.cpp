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
    char arr[6] = {"hello"};
    int cnt = 0;
    char str[101];
    scanf("%s", str);
    int length = strlen(str);
    int i = 0;
    while (i < length){
        if (str[i] == arr[cnt]){
            ++cnt;
            if (cnt == 5)
                break;
        }
        ++i;
    }
    if (cnt == 5){
        puts("YES");
    }else{
        puts("NO");
    }
    return 0;
}
