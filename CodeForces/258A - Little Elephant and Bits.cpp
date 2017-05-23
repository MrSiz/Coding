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
    //file();
    string str;
    cin >> str;
    int n;
    int length = str.size();
    prln(length);
    bool flag = false;
    int pos = -1;
    for (int i = 0; i < length; ++i){
        if (flag == false && str[i] == '0'){
            prln(str[i]);
            prln(i);
            flag = true;
            pos = i;
            prln(pos);
            break;
        }
    }
    prln(pos);
    if (flag == false){
        printf("%s\n", str.data() + 1);
    }else{
        for (int i = 0; i < length; ++i){
            if (i != pos){
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
