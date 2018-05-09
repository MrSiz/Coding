#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> res;
	string temp;
    while (cin >> temp){
        res.push_back(temp);
    }
    int length = res.size();
    for (int i = length - 1; i >= 0; --i){
        if (i != 0){
            cout << res[i] << ' ';
        }else{
            cout << res[i] << endl;
        }
    }
    return 0;
}