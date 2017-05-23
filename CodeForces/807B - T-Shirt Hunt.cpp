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
int arr[26];
int main()
{
    //file();
    int p, x, y;
    scanf("%d%d%d", &p, &x, &y);
    if (x >= y){
        int s = x;
        int i = (s / 50) % 475;
        for (int j = 1; j <= 25; ++j){
            i = (i * 96 + 42) % 475;
            //prln(i);
            if (i + 26 == p)
                return puts("0");
        }
    }
    //return 0;
    int t = x;
    int low = -1;
    while (t >= y){
        int s = t;
        int cnt = 0;
        bool flag = false;
        int i = (s / 50) % 475;
        for (int j = 1; j <= 25; ++j){
            i = (i * 96 + 42) % 475;
            if (i + 26 == p){
                flag = true;
                low = t;
                prln(i);
                break;
            }
        }
        if (flag)
            break;
        t -= 50;
    }
    t = x;
    //prln(low);
    int tot = 0;
    while (x < y){
        x += 100;
        ++tot;
    }
    int ttt = x;
    while (true){
        int s = x;
        int cnt = 0;
        bool flag = false;
        int i = (s / 50) % 475;
        for (int j = 1; j <= 25; ++j){
            i = (i * 96 + 42) % 475;
            if (i + 26== p){
                flag = true;
                prln(i);
                prln(x);
                break;
            }
        }
        if (flag)
            break;
        x += 50;
    }
    int nn = x - ttt;
    if (nn % 100 == 0){
        tot += nn / 100;
    }else
        tot += nn / 100 + 1;
    if (low != -1)
        printf("0\n");
    else
        printf("%d\n", tot);
    return 0;
}