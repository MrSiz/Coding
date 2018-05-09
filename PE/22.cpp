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
    freopen("in.txt", "r", stdin);
    string str;
    getline(cin, str);
//    cout << str << endl;
    size_t length = str.size();
    int i = 0;
    int cnt = 0;
    int index = 0, ans = 0;
    prln(1);
    vector<string> vec;
    while (i < length){
        prln(i);
        if (str[i] == '\"' && cnt == 0){
            ++i;
            ++index;
            int sum = 0;
            string temp;
            while (str[i] != '\"'){
                temp += str[i];
                ++i;
            }
            vec.push_back(temp);
            ++i;
        }
        if (str[i] == ','){
            ++i;
            continue;
        }
    }
    int lengthVec = vec.size();
    sort(vec.begin(), vec.end());
    for (int i = 0; i < lengthVec; ++i){
        int sum = 0;
        int nowL = vec[i].size();
        for (int j = 0; j < nowL; ++j){
            sum += tolower(vec[i][j]) - 'a' + 1;
        }
        ans += sum * (i + 1);
    }
    cout << ans << endl;
    return 0;
}

