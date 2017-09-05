#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *l, *r;
}Node;

Node* insert(Node* root, int val)
{
    if (root == NULL){
        root = (Node*)malloc(sizeof(Node));
        root->data = val;
        root->l = NULL;
        root->r = NULL;
    }else if (val < root->data){
        root->l = insert(root->l, val);
    }else if (val > root->data){
        root->r = insert(root->r, val);
    }
    return root;
}

void pre(Node* root)
{
    if (root){
        printf("%d ", root->data);
        pre(root->l);
        pre(root->r);
    }
}

void in(Node* root)
{
    if (root){
        in(root->l);
        printf("%d ", root->data);
        in(root->r);
    }
}

void pos(Node* root)
{
    if (root){
        pos(root->l);
        pos(root->r);
        printf("%d ", root->data);
    }
}


int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        int temp;
        scanf("%d", &temp);
        Node* root = (Node*)malloc(sizeof(Node));
        root->data = temp;
        root->l = NULL;
        root->r = NULL;
        for (i = 1; i < n; ++i){
            scanf("%d", &temp);
            insert(root, temp);
        }
        pre(root);
        puts("");
        in(root);
        puts("");
        pos(root);
        puts("");
    }

    return 0;
}
