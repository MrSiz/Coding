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
int arr[101];
int main()
{
    //file();
    int n;
    scanf("%d", &n);
    int temp;
    bool flag = true;
    int sum =0;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &temp);
        if (i == 1 && temp > 25){
            flag = false;
        }else if (i == 1){
            arr[25]++;
        }else{
            if (flag == false){
                continue;
            }if (temp == 25){
                arr[25]++;
            }else if (temp == 50){
                if (arr[25] >= 1){
                    arr[25] -= 1;
                    arr[50]++;
                }else{
                    flag = false;
                }
            }else if (temp == 100){
                if (arr[50] >= 1 && arr[25] >= 1){
                    arr[50] -= 1;
                    arr[25]--;
                    arr[100]++;
                }else if (arr[25] >= 3){
                    arr[25] -= 3;
                    arr[100]++;
                }else{
                    flag = false;
                }
            }
        }
    }
    if (flag == false)
        return puts("NO");
    return puts("YES");
    return 0;
}
