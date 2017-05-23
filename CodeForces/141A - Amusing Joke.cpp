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
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    map<char, int> mm;
    for (const auto& elem : str1){
        mm[elem]++;
    }
    for (const auto& elem : str2){
        mm[elem]++;
    }
    for (const auto& elem : str3){
        mm[elem]--;
    }
    for (const auto it : mm){
        if (it.second != 0)
            return puts("NO");
    }
    puts("YES");
    return 0;
}
