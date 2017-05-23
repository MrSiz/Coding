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
int arr[27];

int main()
{
    string str;
    cin >> str;
    for (const auto& elem : str){
        arr[elem - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i <26; ++i){
        if (arr[i] & 1)
            ++cnt;
    }
    if (cnt == 0 || (cnt & 1))
        puts("First");
    else
        puts("Second");
    return 0;
}
