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
    cin >> str;
    auto flag = true;
    auto cnt = 0;
    int length = str.size();
    for (const auto& elem : str){
        if (!(elem == '7' || elem == '4')){
            continue;
        }
        ++cnt;
    }
    if ((cnt == 4 || cnt == 7))
        puts("YES");
    else
        puts("NO");
    return 0;
}
