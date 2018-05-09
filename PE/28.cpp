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

int main()
{
    int val = 1001 * 1001;
    int cnt = 1;
    int sum = val;
    int elem = 1000;
    while (true){
        prln(sum);
        if (cnt == 4){
            val -= elem;
            sum += val;
            elem -= 2;
            cnt = 2;
            cout << "here val = " << val << endl;
            prln(sum) << endl;
        }else{
            ++cnt;
        }
//        cout << "sdfsd val " << val << endl;
        cout << "now val = " << val << endl;
        if (val == 1){
            prln(sum);
            cout << "why > " << endl;
            break;
            cout << "there\n";
        }
        val -= elem;
        sum += val;
        prln(val);
    }
    prln(sum);

    return 0;
}

