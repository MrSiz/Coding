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
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

unordered_map<char, int> last_pos;
unordered_set<char> active;

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int n, k;
    string s;
    cin >> n >> k >> s;
    for (int i = 0; i < n; ++i){
        last_pos[s[i]] = i;
    }
    for (int i = 0; i < n; ++i){
        active.insert(s[i]);
        if (active.size() > k){
            return puts("YES");
        }
        if (last_pos[s[i]] == i)
            active.erase(s[i]);
    }
    puts("NO");
    return 0;
}
