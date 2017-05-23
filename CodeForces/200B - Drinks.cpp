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
double arr[101];

int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 0; i < n; ++i){
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    printf("%.10f\n", sum / (n * 1.0));
    return 0;
}
