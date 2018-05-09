#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int lenA = a.size();
    int lenB = b.size();
    if (lenA != lenB) {
        puts("NO");
        return 0;
    }else {
        if (a == b) {
            puts("YES");
            return 0;
        }
        bool f1 = false, f2 = false;

        for (int i = 0; i < lenA; ++i) {
            if (a[i] == '1') {
                f1 = true;
            }
            if (b[i] == '1') {
                f2 = true;
            }
            if (f1 && f2) {
                puts("YES");
                return 0;
            }
        }
        puts("NO");
        return 0;
    }

}
