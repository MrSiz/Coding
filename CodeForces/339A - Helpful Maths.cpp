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
    multiset<char> ss;
    string str;
    cin >> str;
    for (const auto& elem : str){
        if (isdigit(elem))
            ss.insert(elem);
    }
    for (auto it = ss.begin(); next(it) != ss.end(); ++it){
        cout << *it << '+';
    }
    auto it = ss.end();
    --it;
    cout << *it <<endl;
    return 0;
}
