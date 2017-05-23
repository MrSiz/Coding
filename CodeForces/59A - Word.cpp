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
#define pr(x) //(cout << #x << ' ' << x << ' ')
#define prln(x) //(cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    string str;
    cin >> str;
    int length = str.size(), cnt = 0;
    for (const auto& elem : str){
        if (elem <= 'z' && elem >= 'a'){
            ++cnt;
        }
    }
    //bool flag = cnt > length - cnt ? true : false;
    if (cnt < length - cnt){
        for (const auto& elem : str){
            cout << (char)toupper(elem);
            prln(elem);
        }
    }else{
        for (const auto& elem : str){
            cout << (char)tolower(elem);
            prln(elem);
        }
    }
    cout << endl;
    return 0;
}
