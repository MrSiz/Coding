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
#define long long ll

void file()
{
    freopen("in.txt", "r", stdin);
}

const int MAXN = 1e5 + 5;
int fa[MAXN * 2];
int r[MAXN * 2];

int find_father(int x){
    return fa[x] == x ? x : fa[x] = find_father(fa[x]);
}

void unite(int a, int b){
    a = find_father(a);
    b = find_father(b);
    if (a == b){
        return ;
    }
    if (r[a] > r[b]){
        fa[b] = a;
        r[a]++;
    }else{
        fa[a] = b;
        r[b]++;
    }
    return ;
}

int main()
{
   // file();
    int T;
    scanf("%d", &T);
    while (T--){
        int N, M;
        scanf("%d%d", &N, &M);
        for (int i = 1; i <= 2 * N; ++i){
            fa[i] = i;
            r[i] = 1;
        }
        for (int i = 1; i <= M; ++i){
            char ch[5];
            scanf("%s", ch);
            int a, b;
            if (ch[0] == 'A'){
                //cout << "i" << i << endl;
                scanf("%d%d", &a, &b);
                if (find_father(a) == find_father(b)){
                    puts("In the same gang.");

                }else if (find_father(a) == find_father(b + N) && find_father(a + N) == find_father(b)){
                    puts("In different gangs.");
                }else {
                    puts("Not sure yet.");
                }
            }else if (ch[0] == 'D'){
                scanf("%d%d", &a, &b);
                unite(a, b + N);
                unite(a + N, b);
            }
        }
    }
    return 0;
}
