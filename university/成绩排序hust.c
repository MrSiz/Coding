#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int grade;
    char name[101];
    int age;
};

int cmp(const void* a, const void* b){
    struct Student arg1 = *(struct Student*)a;
    struct Student arg2 = *(struct Student*)b;
    if (arg1.grade != arg2.grade)
    {
        return arg1.grade - arg2.grade;
    }else if (strcmp(arg1.name, arg2.name) != 0){
        return strcmp(arg1.name, arg2.name);
    }
    return arg1.age - arg2.age;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        struct Student s[1001];
        int i;
        for (i = 0; i < n; ++i){
            scanf("%s%d%d", s[i].name, &s[i].age, &s[i].grade);
        }
        qsort(s, n, sizeof(struct Student), cmp);
        for (i = 0; i < n; ++i){
            printf("%s %d %d\n", s[i].name, s[i].age, s[i].grade);
        }
    }
}
