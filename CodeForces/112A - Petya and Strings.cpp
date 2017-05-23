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
    string str1, str2;
    cin >> str1 >> str2;
    int length = str1.size();
    for (int i = 0; i < length; ++i){
        char ch1 = toupper(str1[i]);//str1[i];
        char ch2 = toupper(str2[i]);
        if (ch1 == ch2)
            continue;
        else if (ch1 < ch2){
            printf("-1\n");
            return 0;
        }else{
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
