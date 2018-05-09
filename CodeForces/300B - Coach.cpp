#include <bits/stdc++.h>

using namespace std;
const int maxn = 50;

int f[maxn];
int r[maxn];

int n, m;
bool flag = false;
void init()
{
    for (int i = 1; i <= n; ++i) {
        r[i] = 1;
        f[i] = i;
    }
}
vector<int> res[50];

int Find(int n)
{
    return n == f[n] ? n : f[n] = Find(f[n]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);

    if (a == b)
        return ;

    if (r[a] > r[b]) {
        f[b] = a;
        ++r[a];
        if (r[a] >  3) {
            flag = true;
        }
    }else {
        f[a] = b;
        ++r[b];

        if (r[b] > 3) {
            flag = true;
        }
    }
}

int main()
{
//    freopen("in.txt", "r", stdin);
    scanf("%d%d", &n, &m);
    int a, b;
    init();
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        Union(a, b);
    }

        int temp = 3;
        int one = 0, two = 0;
        for (int i = 1; i <= n; ++i) {
//            cout << i << ' '  << f[i] <<  "here" << r[i] << endl;
            if (f[i] == i && r[i] > temp) {
                puts("-1");
                return 0;
            }else if (f[i] == i && r[i] == 2) {
                ++two;
            }else if (f[i] == i && r[i] == 1) {
                ++one;
            }
            int tt = f[i];
            res[tt].push_back(i);
        }
        if (two > one) {
            puts("-1");
            return 0;
        }

    bool vis[50] = {0};
//    cout << "here" << endl;
    for (int i = 1; i <= n; ++i) {
//        cout <<"enter " << endl;
        if (vis[i] == 0 && res[i].size() == 3) {
//            cout << "----" << endl;
            int len = res[i].size();
            for (int j = 0; j < len; ++j) {
                printf("%d%c", res[i][j], j == len - 1 ? '\n' : ' ');
            }
            vis[i] = 1;
//            cout << "-----" << endl;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (vis[i] == 0 && res[i].size() == 2){
            int len = res[i].size();
            for (int j = 0; j < 2; ++j) {
                printf("%d ", res[i][j]);
            }
            vis[i] = 1;
            for (int k = 1; k <= n; ++k) {
                if (vis[k] == 0 && res[k].size() == 1) {
                    printf("%d\n", res[k][0]);
                    vis[k] = 1;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
         if (vis[i] == 0 && res[i].size() == 1) {
                int cnt = 0;
                printf("%d ", res[i][0]);
                vis[i] = 1;
                ++cnt;
                for (int k = 1; k <= n; ++k) {
                    if (vis[k] == 0 && res[k].size() == 1 && cnt == 1) {
                        printf("%d ", res[k][0]);
                        ++cnt;
                        vis[k] = 1;
                    }else if (vis[k] == 0 && res[k].size() == 1 && cnt == 2) {
                        printf("%d ", res[k][0]);
                        ++cnt;
                        vis[k] = 1;
                        break;
                    }
                }

            }
        }


    return 0;
}
