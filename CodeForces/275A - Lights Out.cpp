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
    int arr[3][3];
    int ans[3][3];
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            scanf("%d", &arr[i][j]);
            ans[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if (arr[i][j] & 1){
                ans[i][j] = 1- ans[i][j];
                if (i - 1 >= 0)
                   ans[i - 1][j] = 1- ans[i - 1][j];
                if (j - 1 >= 0)
                    ans[i][j - 1] = 1 - ans[i][j - 1];
                if (i + 1 < 3)
                    ans[i + 1][j] = 1 - ans[i + 1][j];
                if (j + 1 < 3)
                    ans[i][j + 1] = 1 - ans[i][j + 1];
            }
        }
    }
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            printf("%d", 1- ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
