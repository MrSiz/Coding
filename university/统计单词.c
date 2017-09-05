#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //#define LOCAL
//    #ifdef LOCAL
//        freopen("in.txt", "r", stdin);
//    #endif
    char ch;
    int sum = 0;
    while((ch = getchar()) != EOF){
        //printf("%c", ch);
        if (ch != ' ' && ch != '.' && isalpha(ch)){
            ++sum;
        }else if (ch == ' '){
            printf("%d ", sum);
            sum = 0;
        }else if (ch == '.'){
            printf("%d\n", sum);
            sum = 0;
        }
    }
//    #ifdef LOCAL
//        fclose(stdin);
//    #endif // LOCAL
}
