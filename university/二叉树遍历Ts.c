#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    char data;
    struct Node *l, *r;
}Node;

int pos;

Node* build(char* str)
{
    char c = str[pos++];
   // printf("%c\n",c);
    if (c == '#')
        return NULL;
    Node* root = (Node*)malloc(sizeof(Node));
    root->data = c;
    root->l = build(str);
    root->r = build(str);
    //printf("111\n");
    return root;
}

void in(Node* root)
{
    if (!root)
        return ;
    in(root->l);
    printf("%c ", root->data);
    in(root->r);
    return ;
}

int main()
{
    char str[101];
    while (scanf("%s", str) != EOF){
        pos = 0;
        Node* root = build(str);
        in(root);
        puts("");
    }
    return 0;
}
