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
    int length = str.size();
    int i = 0;
    string ans;
    while (i < length){
        if (str[i] == '-' && i + 1 < length && str[i + 1] == '.'){
            ans.push_back('1');
            i += 2;
        }else if (str[i] == '-' && i + 1 < length && str[i + 1] == '-'){
            ans.push_back('2');
            i += 2;
        }else if (str[i] == '.'){
            ans.push_back('0');
            ++i;
        }
    }
    cout << ans << endl;

    return 0;
}
