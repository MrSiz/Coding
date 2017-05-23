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
//#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    priority_queue<int, vector<int>, less<int> > ll;
    priority_queue<int, vector<int>, greater<int> > ss;
    int max_ans = 0, min_ans = 0;
    int temp;
    for (int i = 0; i < m; ++i){
        scanf("%d", &temp);
        ss.push(temp);
        ll.push(temp);
    }
    int t = n;
    while (t){
        int t_val = ll.top();
        max_ans += t_val;
        t_val--;
        ll.pop();
        --t;
        if (t_val != 0)
            ll.push(t_val);
    }
    t = n;
    while (t){
        int t_val = ss.top();
        prln(t_val);
        ss.pop();
        min_ans += t_val;
        prln(min_ans);
        t_val --;
        --t;
        if (t_val != 0)
            ss.push(t_val);
    }
    printf("%d %d", max_ans, min_ans);
    return 0;
}
