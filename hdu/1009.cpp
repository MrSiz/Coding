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
#include <unordered_map>
#include <unordered_set>

using namespace std;
#define INF 0x3f3f3f3f3f
#define ll long long
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)

struct Trade{
    int j, f;
    double r;
};
vector<Trade> vec;

bool cmp(const Trade &a, const Trade &b)
{
    return a.r > b.r;
}

int main()
{
    #ifdef LOCAL
        freopen("in.txt", "r", stdin);
    #endif // LOCAL
    int M, N;
    while (cin >> M >> N && M != -1 && N != -1){
        vec.clear();
        int j, f;
        for (int i = 0; i < N; ++i){
            cin >> j >> f;
            double r = j * 1.0 / f;
            vec.push_back(Trade{j, f, r});
        }
        sort(vec.begin(), vec.end(), cmp);
        double sum = 0.0;
        for (int i = 0; i < N && M > 0; ++i){
            if (M >= vec[i].f){
                sum += vec[i].j;
                M -= vec[i].f;
            }else {
                sum += vec[i].j * (M  * 1.0) / vec[i].f;
                M = 0;
            }
        }
        printf("%.3f\n", sum);
    }
    return 0;
}
