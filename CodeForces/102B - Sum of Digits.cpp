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

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    string str;
    cin >> str;
    int cnt = 0;
    while (str.size() > 1){
        int length = str.size();
        int sum = 0;
        for (int i = 0; i < length; ++i){
            sum += str[i] - '0';
        }
        ++cnt;
        str = to_string(sum);
    }
    cout << cnt << endl;
    return 0;
}
