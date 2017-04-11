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

void file()
{
    freopen("in.txt", "r", stdin);
}
int arr[1005];
int main()
{
    //file();
    int R, N;
    while (scanf("%d%d", &R, &N) && R != -1 && N != -1){
        for (int i = 0; i < N; ++i){
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + N);
        int ans = 0;
        int i = 0;
        while (i < N){
            int t = arr[i++];
            while (i < N && arr[i] <= t + R)
                ++i;
            int t2 = arr[i - 1];
            while (i < N && arr[i] <= t2 + R)
                ++i;
            ++ans;
        }
        cout << ans << endl;
    }
    return 0;
}
