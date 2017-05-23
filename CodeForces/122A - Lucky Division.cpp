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
        if (elem != '7' || elem != '4'){
            flag = false;
            break;
        }
    }
    if (flag)
        return puts("YES");
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int length = sizeof arr / sizeof(int);
    flag = false;
    int nn = atoi(str.c_str());
    for (int i = 0; i < length; ++i){
        if (nn % arr[i] == 0)
            return puts("YES");
    }
    puts("NO");
    return 0;
}
