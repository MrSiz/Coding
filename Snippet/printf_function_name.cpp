#include <iostream>
#include <cstdio>

using namespace std;

int func() {}

int main(){
	
	
	//func is a pointer
	//it convert the address to true or false
	//so cout 1
	cout << func << endl;
	
	//it will printf the address of func
	printf("%u\n", func);
	
	return 0;
}