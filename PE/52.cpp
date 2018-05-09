#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

void help(int (*arr)[10], int n, int index)
{
    while (n){
        arr[index][n % 10]++;
        n /= 10;
    }
    return ;
}

bool cmp(int *a, int *b)
{
    for (int i = 0; i < 10; ++i){
//        pr(a[i]);prln(b[i]);
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int i = 1;
    while (true){
        bool flag = true;
        int arr[] = {i, 2 * i, 3 * i, 4 * i, 5 * i, 6 * i};

        int cal[6][10];
        memset(cal, 0, sizeof(cal));
        for (int i = 0; i < 6; ++i){
            help(cal, arr[i], i);
        }
        for (int j = 1; j < 6; ++j){
            flag = cmp(cal[0], cal[j]);
            if (flag == false)
                break;
        }
        if (flag == true){
            cout << i << endl;
            for (int i = 0; i < 6; ++i){
                prln(arr[i]);
                prln(cmp(cal[0], cal[i]));
                for (int j = 0; j < 10; ++j){
                    pr(cal[i][j]);
                }
                puts("");
            }
            return 0;
        }
        ++i;
    }
    return 0;
}
