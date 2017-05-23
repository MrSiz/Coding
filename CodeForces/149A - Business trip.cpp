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
int arr[13];

int main()
{
    int k;
    scanf("%d", &k);
    int sum = 0;
    int temp = k;
    for (int i = 1; i <= 12; ++i){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr + 1, arr + 13);
    if (k == 0){
        printf("0\n");
        return 0;
    }else{
        int cnt = 0;
        for (int i = 12; i >= 0 && k > 0; --i){
            k -= arr[i];
            ++cnt;
        }
        if (sum >= temp)
            printf("%d\n", cnt);
        else
            printf("-1\n");
    }
    return 0;
}
