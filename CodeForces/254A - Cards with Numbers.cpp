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
#include <unordered_map>

using namespace std;
#define pr(x) (cout << #x << ' ' << x << ' ')
#define prln(x) (cout << #x << ' ' << x << endl)
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
struct Node{
    int cnt;
    vector<int> index;
    Node() : cnt(0) {}
};

int main()
{
    //file();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    unordered_map<int, Node> mm;
    scanf("%d", &n);
    int t = 2 * n;
    int temp;
    for (int i = 1; i <= t; ++i){
        scanf("%d", &temp);
        mm[temp].cnt++;
        mm[temp].index.push_back(i);
    }
    for (auto it = mm.begin(); it != mm.end(); ++it){
        if (it -> second.cnt % 2 == 1){
            return puts("-1");
        }
    }
    for (auto it = mm.begin(); it != mm.end(); ++it){
        int length = it -> second.index.size();
        for (int i = 0; i < length; i += 2){
            printf("%d %d\n", it -> second.index[i], it -> second.index[i + 1]);
        }
    }
    return 0;
}
