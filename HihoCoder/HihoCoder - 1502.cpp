#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
int arr[255][255];
int sum[255][255];

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
   // file();
    int N, M, K;
    cin >> N >> M >> K;
    for (int i = 1; i <= N; ++i){
        for (int j = 1; j <= M; ++j){
            cin >> arr[i][j];
            sum[i][j] = sum[i - 1][j] + arr[i][j];
        }
    }
    int ans = INT_MIN;
    for (int i = 1; i <= N; ++i){
        for (int j = i; j <= N; ++j){
            int tot = 0, st = 1;
            for (int k = 1; k <= M; ++k){
                tot += sum[j][k] - sum[i - 1][k];
                while (st <= k && tot > K){
                    tot -= sum[j][st] - sum[i - 1][st];
                    ++st;
                }
                if (k >= st){
                    ans = max(ans, ((j - i) + 1) * (k - st + 1));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
