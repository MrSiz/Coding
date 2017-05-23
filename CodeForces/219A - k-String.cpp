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
#include <unordered_map>
using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int k;
    scanf("%d", &k);
    string str;
    cin >> str;
    unordered_map<char, int> mm;
    for (const auto& elem : str){
        mm[elem]++;
    }
    bool flag = true;
    string ans = "";
    for (auto it = mm.begin(); it != mm.end(); ++it){
        if (it -> second %k != 0){
            flag = false;
            break;
        }else{
            int t = (it -> second) / k;
            for (int i = 1; i <= t; ++i){
                ans.push_back(it -> first);
            }
        }
    }
    if (flag){
        for (int i = 1; i <= k; ++i){
            cout << ans;
        }
        cout << endl;
    }
        //cout << ans << endl;
    else{
        puts("-1");
    }
    return 0;
}
