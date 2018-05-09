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

const int MAXN = 1e6;

char arr10[7];
char arr2[100];
int len10, len2;


int toString10(int n)
{
    int cnt = 0;
    while (n){
        arr10[cnt++] = n % 10;
        n /= 10;
    }
    return cnt;
}


int toString2(int n)
{
    int cnt = 0;
    while (n){
        arr2[cnt++] = n % 2;
        n /= 2;
    }
    return cnt;
}

int toString(int n, char* arr, int div)
{
    int cnt = 0;
    while (n){
        arr[cnt++] = n % div;
        n /= div;
    }
    return cnt;

}

bool isPalin(char *arr, int len)
{
    for (int i = 0, j = len - 1; i <= j; ++i, --j){
        if (arr[i]  != arr[j])
            return false;
    }
    return true;
}


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int sum = 0;
    for (int i = 0; i < MAXN; ++i){
        len10 = toString(i, arr10, 10);
        len2 = toString(i, arr2, 2);
        if (isPalin(arr10, len10) && isPalin(arr2, len2)){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

