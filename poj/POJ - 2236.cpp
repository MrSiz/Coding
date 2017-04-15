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
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}
pair<int, int> node[1005];
int fa[1005];
bool flag[1005];
int r[1005];

int N, D;
void init(){
    for (int i = 1; i <= N; ++i){
        fa[i] = i;
        r[i] = 1;
    }
    return ;
}

int find_father(int x){
    return x == fa[x] ? x : fa[x] = find_father(fa[x]);
}

void unite(int a, int b){
    int t_a = find_father(a);
    int t_b = find_father(b);
    if (t_a == t_b){
        return ;
    }
    //cout << "zz\n";
    //fa[a] = t_b;
    if (r[t_a] >= r[t_b]){
        fa[t_b] = t_a;
        r[t_a] += r[t_b];
    }else {
        fa[t_a] = t_b;
        r[t_b] += r[t_a];
    }
    pr(fa[a]);prln(fa[b]);
   // cout << "end\n";
    return ;
}

int distance1(pair<int, int> a, pair<int, int> b){
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

int main()
{
   // file();

    //prln(fa[1]);
    scanf("%d%d", &N, &D);
    init();
    for (int i = 1; i <= N; ++i){
        scanf("%d%d", &node[i].first, &node[i].second);
    }
    char ch[5];
    while (~scanf("%s", ch)){
        //getchar();
        if (ch[0] == 'O'){
            int temp;
            scanf("%d", &temp);
            flag[temp] = true;
            for (int i = 1; i <= N; ++i){
                if (i != temp && flag[i] && distance1(node[i], node[temp]) <= D * D){
                    unite(i, temp);
                    //pr(fa[i]);prln(fa[temp]);
                    int f_a = find_father(i);
                    int f_b = find_father(temp);
                    pr(f_a);prln(f_b);
                }
            }
        }else {
            int a, b;
            scanf("%d%d", &a, &b);
            //double dis = distance1(node[a], node[b]);
            //pr(a);prln(b);
            //if (dis <= D){
            //    unite(a, b);
            //}
            //prln(dis);
            //pr(fa[a]);prln(fa[b]);
            int t_a = find_father(a);
            int t_b = find_father(b);
            pr(t_a);prln(t_b);
            if (t_a == t_b){
                puts("SUCCESS");
            }else {
                puts("FAIL");
            }
        }
    }
    return 0;
}