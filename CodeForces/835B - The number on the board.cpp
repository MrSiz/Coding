#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INT 0x3f3f3f3f3f
#define ll long long
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)

int k;
int a[10];

int help(int l, int r, int t, int target)
{
    while (l < r){
        int m = l + (r - l) / 2;
        if (m * t >= target){
            r = m;
        }else{
            l = m + 1;
        }
    }
    if (l * t >= target){
        return l;
    }
    return 0;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int k;
    char ch;
    scanf("%d", &k);
    getchar();
    bool flag = false;
    int sum = 0;
    while ((ch = getchar()) != EOF && ch != '\n'){
//        int sum = 0;
        prln(ch);
        sum += ch - '0';
        if (sum >= k){
            flag = true;
        }
        int tt = ch - '0';
        switch (tt){
            case 1: ++a[1];break;
            case 2: ++a[2];break;
            case 3: ++a[3];break;
            case 4: ++a[4];break;
            case 5: ++a[5];break;
            case 6: ++a[6];break;
            case 7: ++a[7];break;
            case 8: ++a[8];break;
            case 9: ++a[9];break;
            case 0: ++a[0];break;
        }
    }
    for (int i = 0; i <= 9; ++i)
        prln(a[i]);
    prln(2);
    if (flag)
        puts("0");
    else{
        k -= sum;
        int cnt = 0;
        int index = 0;
        prln(k);
        while (k > 0){
            prln(a[index]);
            while (a[index] == 0) ++index;
            if (a[index] > 0 && k - a[index] * (9 - index) > 0){
                k -= a[index] * (9 - index);
                cnt += a[index];
                index++;
//                prln(k);
            }else{
                prln(cnt);
                int t = help(1, a[index], 9 - index, k);
                cnt += t;
                break;
            }
            prln(k);
        }
        printf("%d\n", cnt);
    }
    return 0;
}