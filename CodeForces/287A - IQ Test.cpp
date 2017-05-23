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
char arr[5][5];

int main()
{
    //file();
    for (int i = 1; i <= 4; ++i){
        for (int j = 1; j <= 4; ++j){
            scanf(" %c", &arr[i][j]);
        }
    }
//    for (int i = 1; i <= 4; ++i){
//        for (int j = 1; j <= 4; ++j){
//            cout << arr[i][j];
//        }
//        cout << endl;
//    }
    bool flag = false;
    bool help = false;
    for (int i = 1; i <= 3; ++i){
        for (int j = 1; j <= 3; ++j){
            char ch = arr[i][j];
            int cnt = 0;
            if (arr[i + 1][j] == ch){
                cnt++;
            }
            if (arr[i][j + 1] == ch){
                cnt++;
            }
            if (arr[i + 1][j + 1] == ch){
                cnt++;
            }
            prln(cnt);
            if (cnt == 3)
                flag = true;
            if (cnt == 2)
                flag = true;
            if (cnt == 0)
                flag = true;
        }
    }
    if (flag == false)
        return puts("NO");
    puts("YES");
    return 0;
}
