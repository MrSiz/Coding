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
    //file();
    string str;
    cin >> str;
    string oth(str);
    reverse(str.begin(), str.end());
    int length = str.size();
    int cnt = 0;
    for (int i = 0; i < length; ++i){
        if (str[i] != oth[i])
            ++cnt;
    }
    //prln(cnt);
    if (cnt == 2 || (cnt == 0 && (length & 1))){
        puts("YES");
    }else {
        puts("NO");
    }
    return 0;
}
