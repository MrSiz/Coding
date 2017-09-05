#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode{
    int data;
    struct LinkNode* next;
}LinkNode, *LinkList;

void insert(LinkList phead, int data)
{
    LinkList head = phead -> next;
    while (head != NULL && head->data <data){
        head = head->next;
        phead = phead->next;
    }
    LinkList temp = (struct LinkNode*)malloc(sizeof(struct LinkNode));
    temp->data = data;
    temp->next = head;
    phead->next = temp;
//    printf("temp : %d\n", temp->data);
    return ;
}


void print(LinkList phead)
{
    LinkList head = phead -> next;
    while (head -> next!= NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);
//    puts("");
    return ;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        LinkList phead = (LinkList)malloc(sizeof(LinkNode));
        phead->next = NULL;
        phead->data = -1;
        for (i = 0; i < n; ++i){
            int temp;
            scanf("%d", &temp);
//            printf("%d\n", temp);
            insert(phead, temp);
        }
       print(phead);
    }
    return 0;
}

