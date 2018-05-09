#include <bits/stdc++.h>

using namespace std;

pair<int, int> solve(int x)
{
    int cnt = 0;
    while (x % 5 == 0) {
        ++cnt;
        x /= 5;
    }
    while (x % 3 == 0) {
        ++cnt;
        x /= 3;
    }
    while (x % 2 == 0) {
        ++cnt;
        x /= 2;
    }
    return make_pair(cnt, x);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int temp = __gcd(a, b);

    int t_a = a / temp;
    int t_b = b / temp;

    pair<int, int> res_a = solve(t_a);
    pair<int, int> res_b = solve(t_b);

    if (res_a.second != 1 || res_b.second != 1) {
        puts("-1");
        return 0;
    }
    printf("%d\n", res_a.first + res_b.first);
}
