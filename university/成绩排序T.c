#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int id;
    int grade;
}Node;

int cmp(const void* a, const void* b)
{
    Node arg1 = *(Node*)a;
    Node arg2 = *(Node*)b;
    if (arg1.grade != arg2.grade)
        return arg1.grade - arg2.grade;
    else
        return arg1.id - arg2.id;
    return 0;
}

int main()
{
    Node arr[105];
    int n;
    while (scanf("%d", &n) != EOF){
        int i;
        for (i = 0; i < n; ++i){
            scanf("%d%d", &arr[i].id, &arr[i].grade);
        }
        qsort(arr, n, sizeof(Node), cmp);
        for (i = 0; i < n; ++i){
            printf("%d %d\n", arr[i].id, arr[i].grade);
        }
    }
    return 0;
}
