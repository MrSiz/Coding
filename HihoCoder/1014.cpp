#include <iostream>

using namespace std;

struct Node{
	Node* arr[26];
	int num;
	Node() : num(0){
		for (int i = 0; i < 26; ++i){
			arr[i] = NULL;
		}
	}
};

Node tree;

void ins(char *str)
{
	Node* temp = &tree;
	for (int i = 0; str[i]; ++i){
		if (temp->arr[str[i] - 'a'] == NULL)
			temp->arr[str[i] - 'a'] = new Node;
		temp = temp->arr[str[i] - 'a'];
		temp->num++;
	}
	
	return ;
}


int find(char *str)
{
	Node* temp = &tree;
	for (int i = 0; str[i]; ++i){
		if (temp->arr[str[i] - 'a'] == NULL)
			return 0;
		temp = temp->arr[str[i] - 'a'];
	}
	return temp->num;
}

int main()
{
	int n, m;
	scanf("%d", &n);
	char arr[15];
	for (int i = 0; i < n; ++i){
		scanf("%s", arr);
		ins(arr);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; ++i){
		scanf("%s", arr);
		int ans = find(arr);
		printf("%d\n", ans);
	}
	return 0;
}