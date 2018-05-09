//link: http://blog.csdn.net/u013480600/article/details/19758029

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;
const int maxn = 202;
int d[100 + 5][maxn][maxn];
int a[110][10];
int b[110];
int n, m, cnt;

int v[maxn], num[maxn];

bool compa(int s1, int s2, int r)
{
    s1 = v[s1];
    s2 = v[s2];
    bool ok = true;

    if (r == 1){
        if ( (s1 & (s2 << 1)) || (s2 & (s1 << 1))){
            ok = false;
        }
    }else {
        if (s1 & s2)
            ok = false;
    }
    return ok;
}

bool legal(int r, int s)
{
    s = v[s];
    if (b[r] & s){
        return false;
    }
    return true;
}

int bitcount(int x)
{
    if (x == 0)
        return 0;
    return (x & 1) + bitcount(x / 2);
}

int main()
{
//    freopen("in.txt", "r", stdin);
    while (scanf("%d%d", &n, &m) == 2 && n && m){
        for (int i = 0; i < n; ++i){
            b[i] = 0;
            for (int j = 0; j < m; ++j){
                scanf("%d", &a[i][j]);
                if (!a[i][j])
                    b[i] = b[i] | (1 << (j));
            }
        }

        int sum = 0;
        cnt = 0;

        for (int i = 0; i < (1 << m); ++i){
            if (i & (i << 2))
                continue;
            num[cnt] = bitcount(i);
            v[cnt++] = i;
        }
        memset(d, 0, sizeof(d));

        for (int i = 0; i < cnt; ++i){
            if (legal(0, i)){
                d[0][i][0] = num[i];
                if (n == 1)
                    sum = max(sum, d[0][i][0]);
            }
        }

        for (int i = 0; i < cnt; ++i){
            if (legal(1, i)){
                for (int j = 0; j < cnt; ++j){
                    if (legal(0, j)){
                        if (compa(i, j, 1)){
                            d[1][i][j] = num[i] + num[j];
                            if (n == 2)
                                sum = max(sum, d[1][i][j]);
                        }
                    }
                }
            }
        }
       // cout <<"here" << endl;
        for (int r = 2; r < n; ++r){
            for (int i = 0; i < cnt; ++i){
                if (legal(r, i)){
                    for (int j = 0; j < cnt; ++j){
                        if (legal(r - 1, j)){
                            for (int k = 0; k < cnt; ++k){
                                if (legal(r - 2, k)){
                                    if (compa(i, j, 1) && compa(j , k, 1) && compa(i, k, 2)){
                                        d[r][i][j] = max(d[r][i][j], d[r - 1][j][k] + num[i]);
                                        if (r == n - 1)
                                            sum = max(sum, d[r][i][j]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
            printf("%d\n", sum);
    }

}
