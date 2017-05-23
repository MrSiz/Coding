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
    int n;
    scanf("%d", &n);
    string res;
    int t = 0;
    char ch;
    string temp;
    int cnt = 0;
    for (int i = 1; i <= n; ++i){
        scanf(" %c", &ch);
        //prln(ch);
        if (ch == '0'){
            cnt++;
            continue;
        }
        t *= 10;
        t += 10;
        temp.push_back(ch);
        if (t % 9 == 0){
            res.append(temp);
            temp.clear();
            t = 0;
        }
    }
    if (cnt >0){
        if (res.empty())
            cout << 0 << endl;
        else{
            res += string(cnt, '0');
            cout << res << endl;
        }
    }else{
        printf("-1\n");
    }
}
