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
char arr[2005];

int main()
{
    //file();
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    arr[N] = '\0';
    int st = 0, ed = N - 1;
    bool l = false;
    int cnt = 0;
    while (st <= ed){
        for (int i = 0; st + i <= ed; ++i){
            if (arr[st + i] < arr[ed - i]){
                l = true;
                break;
            }else if (arr[st + i] > arr[ed - i]){
                l = false;
                break;
            }
        }
        if (l){
            cout << arr[st], st++;
            ++cnt;
            if (cnt % 80 == 0)
                puts("");
        }
        else{
            cout << arr[ed], ed--;
            ++cnt;
            if (cnt % 80 == 0)
                puts("");
        }
    }
    puts("");
    return 0;
}
