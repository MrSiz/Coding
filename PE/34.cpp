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

int fac(const int &n)
{
    int res = 1;
    for (int i = 1; i <= n; ++i){
        res *= i;
    }
    return res;
}

int arr[10];

int main()
{
    arr[0] = 1, arr[1] = 1;
    for (int i = 2; i < 10; ++i){
        arr[i] = fac(i);
    }
    const int MAXN = 1e6;
    int res = 0;
    for (int i = 15; i < MAXN; ++i){
        int temp = i;
        int sum = 0;
        while (temp){
            sum += arr[temp % 10];
            temp /= 10;
        }
        if (sum == i){
            res += i;
        }
    }
    cout << res << endl;
    return 0;
}

