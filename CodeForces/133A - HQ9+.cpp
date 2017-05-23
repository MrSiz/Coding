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
    bool flag = true;
    for (const auto& elem : str){
        if (elem == 'H' || elem == 'Q' || elem == '9'){
            flag = false;
            continue;
        }
    }
    if (flag)
        puts("NO");
    else
        puts("YES");
    return 0;
}
