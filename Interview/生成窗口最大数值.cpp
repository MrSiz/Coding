#include <iostream>
#include <deque>

using namespace std;

int ans[10];
int index;
int w = 3;
void solve(int *arr, int length)
{
	deque<int> que;
	for (int i = 0; i < length; ++i){
		while (!que.empty() && arr[que.back()] <= arr[i]){
			que.pop_back();
		}
		que.push_back(i);
		if (que.front() <= i - w){
			que.pop_front();
		}
		if (i >= w - 1){
			ans[index++] = arr[que.front()];
			cout << ans[index - 1] << endl;
		}
	}
	return ;
}

int main()
{
	int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	solve(arr, 8);
	cout << 1 << endl;
	for (int i = 0; i < index; ++i){
		cout << ans[i] << endl;
	}
	return 0;
}