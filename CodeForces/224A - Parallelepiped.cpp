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
    int s1, s2, s3;
    scanf("%d%d%d", &s1, &s2, &s3);
    int c = sqrt(s2 * s3 / s1);
    int a = c * s1 / s2;
    int b = s1 / a;
    //pr(a);pr(b);prln(c);
    printf("%d\n", (a + b + c) * 4);
    return 0;
}
