//link:http://blog.csdn.net/svitter/article/details/25186367

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>


using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define MAXN 256
char br[MAXN];
//dp[i][j]表示i,j之间需要多少个括号才能匹配
//pos[i][j]表示i, j之间需要匹配括号最少时的分隔位置
int dp[MAXN][MAXN], pos[MAXN][MAXN];
int len;
void print_br(int i, int j)
{
    if (i > j)
        return ;
    if (i == j){
        if (br[i] == '(' || br[i] == ')')
            printf("()");
        else
            printf("[]");
    }else if (pos[i][j] == -1){
        printf("%c", br[i]);
        print_br(i + 1, j - 1);
        printf("%c", br[j]);
    }else {
        print_br(i, pos[i][j]);
        print_br(pos[i][j] + 1, j);
    }
}

bool match(int i, int j)
{
    if (br[i] == '(' && br[j] == ')')
        return true;
    if (br[i] == '[' && br[j] == ']')
        return true;
    return false;
}


int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL

    int i, j, k,mid, t;

    while (gets(br) != NULL){
        memset(dp, 0, sizeof(dp));

        len = strlen(br);

        for (i = 0; i <len; ++i)
            dp[i][i] = 1;

        for (k = 1; k < len; ++k){
            for (i = 0; i + k < len; ++i){
                j = i + k;
                dp[i][j] = INF;

                if (match(i, j))
                    dp[i][j] = dp[i + 1][j - 1], pos[i][j] = -1;

                for (mid = i; mid < j; mid++){
                    int t = dp[i][mid] + dp[mid + 1][j];
                    if (dp[i][j] > t){
                        dp[i][j] = t;
                        pos[i][j] = mid;
                    }
                }
            }
        }
        print_br(0, len - 1);
        printf("\n");
    }
    return 0;
}
