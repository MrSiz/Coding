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


int main()
{
    set<int> ans;
    for (int i = 1; i < 100; ++i){
        for (int j = 1; j < 5000; ++j){
            int k = i * j;
            int cnt[10] = {0};
            string temp = to_string(i) + to_string(j) + to_string(k);
            int length = temp.size();
            if (length < 9)
                continue;
            bool flag = true;
            for (int ii = 0; ii < length; ++ii){
                if (++cnt[temp[ii] - '0'] > 1){
                    flag = false;
                    break;
                }
            }
            if (cnt[0] != 0 || cnt[9] == 0){
                flag = false;
                continue;
            }
            if (flag == true){
                cout << temp << endl;
                ans.insert(k);
            }
        }
    }
    cout << ans.size() << endl;
    for (const auto & val : ans){
        cout << val << endl;
    }
    cout <<accumulate(ans.begin(), ans.end(), 0) << endl;
    return 0;
}

