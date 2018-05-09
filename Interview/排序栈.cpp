#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &s){
	stack<int> help;
	while (!s.empty()){
		int val = s.top();
		s.pop();
		while (!help.empty() && help.top() > val){
			s.push(help.top());
			help.pop();
		}
		help.push(val);
	}
	while (!help.empty()){
		s.push(help.top());
		help.pop();
	}
	return ;
}

int main()
{
	stack<int> s;
	s.push(4);
	s.push(5);
	s.push(3);
	solve(s);
	while (!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}