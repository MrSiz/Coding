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
struct Student{
    string name;
    int grade;
};
vector<Student> stu;
bool cmp(const Student& a, const Student& b){
    return a.grade < b.grade;
}

int main()
{
    //file();
    int n;
    scanf("%d", &n);
    int type;
    scanf("%d", &type);
    for (int i = 1; i <= n; ++i){
        string name;
        int g;
        cin >> name >> g;
        stu.push_back(Student{name, g});
    }
    stable_sort(stu.begin(), stu.end(), cmp);
    int length = stu.size();
    if (type == 1){
        for (int i = 0; i < length; ++i){
            cout << stu[i].name << ' ' << stu[i].grade << endl;
        }
    }else{
        for (int i = length - 1; i >= 0; --i){
            cout << stu[i].name << ' ' << stu[i].grade << endl;
        }
    }
    return 0;
}
