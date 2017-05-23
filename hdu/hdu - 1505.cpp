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
int arr[1001][1001];
int l_[1005], r_[1005];

int main()
{
   // file();
    int K;
    scanf("%d", &K);
    for (int i = 1; i <= K; ++i){
        int r, c;
        memset(arr, 0, sizeof(arr));
        scanf("%d%d", &r, &c);
//
//        for (int j = 1; j <= c; ++j){
//            arr[0][j] = 0;
//        }
        char ch;
        for (int j = 1; j <= r; ++j){
            for (int k = 1; k <= c; ++k){
                scanf(" %c", &ch);
                if (ch == 'R'){
                    arr[j][k] = 0;
                }else {
                    arr[j][k] = arr[j - 1][k] + 1;
                }
                //prln(arr[i][j]);
            }
        }
        //cout << arr[1][1] << endl;
//        for (int i = 1; i <= r; ++i){
//            for (int j = 1; j <= c; ++j){
//                printf("%d ", arr[i][j]);
//            }
//            puts("");
//        }
        prln(1);
        int ans = INT_MIN;
        for (int i = 1; i <= r; ++i){
            l_[1] = 1, r_[c] = c;
            int temp;
            for (int j = 2; j <= c; ++j){
                temp = j;
                while (temp > 1 && arr[i][j] <= arr[i][temp - 1]){
                    temp = l_[temp - 1];

                }
                l_[j] = temp;
            }
            prln("ss");
            for (int j = c - 1; j >= 1; --j){
                temp = j;
                while (temp < c && arr[i][j] <= arr[i][temp + 1]){
                    prln(temp);
                    temp = r_[temp + 1];
                    prln(r_[temp + 1]);
                   // prln(temp);

                    //prln(temp);
                }
                r_[j] = temp;
            }
            prln("yy");
            for (int j = 1; j <= c; ++j){
                ans = max(ans, arr[i][j]* (r_[j] - l_[j] + 1));
                prln(ans);
            }
            prln("zz");
        }
        printf("%d\n", ans * 3);
    }
    return 0;
}