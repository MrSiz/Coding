#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[1005], str2[1005], ans[1005];
    int carry = 0;
    int index = 0;
    while (scanf("%s%s", str1, str2) != EOF){
        int pos1 = strlen(str1) - 1, pos2 = strlen(str2) - 1;
//        printf("%s%s\n", str1, str2);
        while (pos1 >= 0 || pos2 >= 0){
            int sum;
            if (pos1 >= 0 && pos2 >= 0){
                sum = carry + (str1[pos1--] -'0' + str2[pos2--] - '0');
            }else if (pos1 >= 0){
                sum = carry + (str1[pos1--] - '0');
            }else if (pos2 >= 0){
                sum = carry + (str2[pos2--] - '0');
            }
            ans[index++] = sum % 10;
            carry = sum / 10;
        }
        while (index > 0){
            printf("%d", ans[index - 1]);
            --index;
        }
        printf("\n");
    }
    return 0;
}
