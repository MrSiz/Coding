#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a = 0, g = 0;
    string res;
    scanf("%d", &n);
    int ta, tg;
    for (int i = 1; i <= n; ++i) {
        scanf("%d%d", &ta, &tg);

        if (a + ta > g + 500) {
            g += tg;
            res.push_back('G');
        }else {
            a += ta;
            res.push_back('A');
        }
    }

    if (abs(a - g) > 500) {
        puts("-1");
        return 0;
    }
    cout << res << endl;
    return 0;
}
