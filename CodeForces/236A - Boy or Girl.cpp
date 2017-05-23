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
    set<char> ans;
    string str;
    cin >> str;
    for (const auto& elem : str){
        ans.insert(elem);
    }
    int length = ans.size();
    if (length & 1)
        puts("IGNORE HIM!");
    else
        puts("CHAT WITH HER!");
    return 0;
}
