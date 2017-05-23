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
#include <unordered_map>

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
    unordered_map<string, int> mm;
    int n;
    scanf("%d", &n);
    string str;
    for (int i = 1; i <= n; ++i){
        cin >> str;
        mm[str]++;
    }
    auto it = mm.begin();
    auto nex = next(it);
    if (nex == mm.end()){
        cout << it -> first << endl;
        return 0;
    }
    if (it -> second > nex -> second){
        cout << it -> first << endl;
    }else{
        cout << nex -> first << endl;
    }
    return 0;
}
