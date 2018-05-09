//brute force
//another solution: calculate the sum of all the digits before n
// 1~9: 9
// 10~99: 90
// 100~999: 900
//.....
#include <iostream>
#include <string>
using namespace std;

int main() {
	string number;
	int i = 0;
	while (number.length() < 1000000) {
		i++;
		number += to_string(i);
	}
	unsigned long long product;
	product = (number[0]-'0') * (number[9] - '0') * (number[99] - '0') * (number[999] - '0') * (number[9999] - '0') * (number[99999] - '0') * (number[999999] - '0');
	cout << product<< endl;
	return 0;
}
