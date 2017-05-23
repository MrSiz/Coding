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
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    string ans;
    int length = str1.size();
    for (int i = 0; i < length; ++i){
        char t = '0' + ((str1[i] - '0') ^ (str2[i] - '0'));
        ans.push_back(t);
    }
    cout << ans << endl;
    return 0;
}
