#include <iostream>
#include <vector>

using namespace std;

vector<int> buildMaxTree(vector<int> A, int n)
{
	if (n <= 0){
		return {};
	}
	vector<int> res;
	stack<int> s; //decent;
	
	for (int i = 0; i < n; ++i){
		int pos = -1;
		while (!s.empty() && A[i] > A[s.top()]){
			int tmp = s.top();
			s.pop();
			if (res[tmp] == -1 || A[i] < A[res[tmp]]){
				res[tmp] = i;
			}
		}
		if (!s.empty()){
			pos = s.top();
		}
		s.push(i);
		res.push_back(pos);
	}
	return res;
}

int main()
{
	
}