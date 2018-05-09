#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int arr[1005];

int dfs(int n){
    int cnt = 1;
    while (arr[n] != -1){
    	n = arr[n];
        ++cnt;
    }
    return cnt;
}

int main(){
    int n;
    while (cin >> n){
        memset(arr, -1, sizeof(arr));
        int p, c;
        for (int i = 0; i < n - 1; ++i){
            cin >> p >> c;
            arr[c] = p;
        }
        int res = INT_MIN;
        for (int i = 0; i < n; ++i){
            res = max(dfs(i), res);
        }
        cout << res << endl;
    }
    return 0;
}