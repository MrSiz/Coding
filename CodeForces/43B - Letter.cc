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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
int arr[256]{};
int arr2[256]{};
int main()
{
    //file();
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    prln(str1);
    prln(str2);
    for (const auto& elem : str1){
        arr[elem]++;
    }
    for (const auto& elem : str2){
        if (elem != ' '){
            arr[elem]--;
            if (arr[elem] < 0)
                return puts("NO");
        }
    }
    return puts("YES");
}
