#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

bool cmp(const string& a, const string& b){
	return (a + b) > (b + a);
}

int main(){
    int n;
    while (cin >> n){
	    vector<string> str;
    	string temp;
        for (int i = 0; i < n; ++i){
            cin >> temp;
            str.push_back(temp);
        }
        sort(str.begin(), str.end(), cmp);
        for (int i = 0; i < n; ++i){
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}