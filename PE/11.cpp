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
#include <sstream>

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
    string str;
    vector<vector<int>> vec;
    while (getline(cin, str)){
        vec.push_back({});
        istringstream in(str);
        int val;
        int i = vec.size() - 1;
        while (in){
            in >> val;
            vec[i].push_back(val);
        }
    }
    int r = vec.size();
    int c = vec[0].size();
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            printf("%02d ", vec[i][j]);
        }
        cout << endl;
    }
    int ans = -1;
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            if (i + 3 < r){
                int val = vec[i][j] * vec[i + 1][j] * vec[i + 2][j] * vec[i + 3][j];
                ans = max(ans, val);
            }
            if (j + 3 < c){
                int val = vec[i][j] * vec[i][j + 1] * vec[i][j + 2] * vec[i][j + 3];
                ans = max(ans, val);
            }
            if (j + 3 < c && i + 3 < r){
                int val = vec[i][j] * vec[i + 1][j + 1] * vec[i + 2][j + 2] * vec[i + 3][j + 3];
                ans = max(ans, val);
            }
            if (i + 3 < r && j - 3 >= 0){
                int val = vec[i][j] * vec[i + 1][j - 1] * vec[i + 2][j - 2] * vec[i + 3][j - 3];
                ans = max(ans, val);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
