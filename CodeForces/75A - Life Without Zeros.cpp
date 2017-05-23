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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    auto func = [](int n) -> int{
       int sum = 0, temp = 1;
       while (n){
            if (n % 10 != 0){
                sum += (n % 10) * temp;
                temp *= 10;
            }
            n /= 10;
       }
       return sum;
    };
    int a, b;
    scanf("%d%d", &a, &b);
    int t_a = func(a);
    int t_b = func(b);
    int sum = func(a + b);
    pr(t_a);pr(t_b);prln(sum);
    if (t_a + t_b == sum)
        return puts("YES");
    puts("NO");
    return 0;
}
