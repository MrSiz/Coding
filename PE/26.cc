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

int arr[1005];

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int length = 0;
    for (int i = 1000; i > 1; --i){
        if (length >= i){
            break;
        }
        memset(arr, 0, sizeof(arr));
        int elem = 1;
        int pos = 0;

        while (arr[elem] == 0 && elem != 0){
            arr[elem] = pos;
            elem *= 10;
            elem %= i;
            pos++;
        }

        if (pos - arr[elem] > length){
            length = pos - arr[elem];
        }
    }
    cout << length + 1<< endl;
    return 0;
}
