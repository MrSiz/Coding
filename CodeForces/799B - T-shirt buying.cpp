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
#define ll long long

void file()
{
    freopen("in.txt", "r", stdin);
}
int arr[200005];
bool flag[200005];

struct Node{
    int color;
    int price;
    int index;
};

class help{
public:
    bool operator()(const Node& lhs, const Node& rhs){
        return lhs.price > rhs.price;
    }
};
int main()
{
    //file();
    int n;
    scanf("%d", &n);
    priority_queue<Node, vector<Node>, help> c1, c2, c3;
    for (int i = 1; i <= n; ++i){
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; ++i){
        Node temp;
        scanf("%d", &temp.color);
        temp.index = i;
        temp.price = arr[i];
        if (temp.color == 1){
            c1.push(temp);
        }else if (temp.color == 2){
            c2.push(temp);
        }else{
            c3.push(temp);
        }
    }
    for (int i = 1; i <= n; ++i){
        Node temp;
        scanf("%d", &temp.color);
        temp.index = i;
        temp.price = arr[i];
        if (temp.color == 1){
            c1.push(temp);
        }else if (temp.color == 2){
            c2.push(temp);
        }else{
            c3.push(temp);
        }
    }
    prln(c1.size());
    prln(c2.size());
    prln(c3.size());
    int m;
    scanf("%d", &m);
    int cc;
    for (int i = 1; i <= m; ++i){
        scanf("%d", &cc);
        if (cc == 1){
            bool ok = false;
            while (!c1.empty()){
                Node temp = c1.top();
                //prln(temp.price);
                if (flag[temp.index] == 1){
                    c1.pop();
                    continue;
                }else{
                    ok = true;
                    flag[temp.index] = 1;
                    printf("%d ", temp.price);
                    c1.pop();
                    break;
                }
            }
            if (ok == false)
                printf("-1 ");
        }else if (cc == 2){
            bool ok = false;
            while (!c2.empty()){
                Node temp = c2.top();
                //prln(temp.price);
                if (flag[temp.index] == 1){
                    c2.pop();
                    continue;
                }else{
                    ok = true;
                    flag[temp.index] = 1;
                    printf("%d ", temp.price);
                    c2.pop();
                    break;
                }
            }
            if (ok == false)
                printf("-1 ");
        }else{
            bool ok = false;
            while (!c3.empty()){
                Node temp = c3.top();
                //prln(temp.price);
                if (flag[temp.index] == 1){
                    c3.pop();
                    continue;
                }else{
                    ok = true;
                    flag[temp.index] = 1;
                    printf("%d ", temp.price);
                    c3.pop();
                    break;
                }
            }
            if (ok == false)
                printf("-1 ");
        }
    }
    return 0;
}