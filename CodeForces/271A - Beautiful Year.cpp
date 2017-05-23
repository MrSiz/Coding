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
    int n;
    cin >> n;
    int i = n + 1;
    int a, b, c, d;
    while (true){
        int t = i;
        a = t % 10, t /= 10;
        b = t % 10, t /= 10;
        c = t % 10, t /= 10;
        d = t % 10, t /= 10;
        if (a != b && a != c && a != d && b != c &&
            b != d && c != d){
                cout << i  << endl;
                return 0;
            }
        ++i;
    }
    return 0;
}
