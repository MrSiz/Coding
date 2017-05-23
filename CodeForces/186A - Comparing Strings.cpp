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
    //file();
    string str1, str2;
    cin >> str1 >> str2;
    int length1 = str1.size(), length2 = str2.size();
    if (length1 != length2)
        return puts("NO");
    int cnt = 0;
    unordered_map<char, int> mm1, mm2;
    for (int i = 0; i < length1; ++i){
        if (str1[i] != str2[i])
            ++cnt;
        mm1[str1[i]]++;
        mm2[str2[i]]++;
    }
    if (cnt != 2 || mm1 != mm2)
        return puts("NO");
    puts("YES");
    return 0;
}
