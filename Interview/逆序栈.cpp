#include <iostream>
#include <stack>

using namespace std;

int getBottomVal(stack<int>& s)
{
	int val = s.top();
	s.pop();
	if (s.empty()){
		return val; 
	}else {
		int last = getBottomVal(s);
		s.push(val);
		return last;
	}
}

void solve(stack<int>& s)
{
	if (s.empty()){
		return ;
	}
	int val = getBottomVal(s);
	solve(s);
	s.push(val);
	return ;
}


int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	solve(s);
	while (!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}