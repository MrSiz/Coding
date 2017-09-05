#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Stuff{
    int id;
    char name[11];
    int age;
};

int cmp(const void* a, const void* b)
{
    struct Stuff arg1 = *(struct Stuff*)a;
    struct Stuff arg2 = *(struct Stuff*)b;
    if (arg1.age != arg2.age)
        return arg1.age - arg2.age;
    else if (arg1.id != arg2.id)
        return arg1.id - arg2.id;
    else if (strcmp(arg1.name, arg2.name) != 0)
        return strcmp(arg1.name, arg2.name);
    return 0;
}


int main()
{
    int n;
    while (scanf("%d", &n) != EOF){
        struct Stuff s[35];
        int i;
        for (i = 0; i < n; ++i){
            scanf("%d%s%d", &s[i].id, s[i].name, &s[i].age);
        }
        qsort(s, n, sizeof(struct Stuff), cmp);
        for (i = 0; i < 3; ++i){
            printf("%d %s %d\n", s[i].id, s[i].name, s[i].age);
        }
    }

    return 0;
}
