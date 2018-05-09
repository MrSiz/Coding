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
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    string str("1");
    int cnt = 1000;
    while (cnt--){
        int length = str.size();
        int elem, carry = 0;
        for (int i = length - 1; i >= 0; --i){
            elem = (str[i] - '0') * 2 + carry;
            carry = elem / 10;
            str[i] = '0' + (elem % 10);
        }
        if (carry){
            str = "1" + str;
        }
    }
    int sz = str.size();
    prln(sz);
    int sum = 0;
    for (int i = 0; i < sz; ++i){
        prln(str[i]);
        sum += str[i] - '0';
    }
    cout << sum << endl;
    return 0;
}
