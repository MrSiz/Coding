#include<stdio.h>
#define row 4
#define col 5
  
int main(){
    int n ;
    while(scanf("%d" , &n) != EOF){
        for(int i = 0 ; i < n ; ++i){
            int matrix[row][col];
            int index[2][col] = {{0 , 0 , 0 , 0 , 0} , {1 , 1 , 1 , 1 , 1}} ;
            for(int i = 0 ; i < row ; ++i){
                for(int j = 0 ; j < col ; ++j){
                    scanf("%d" , &matrix[i][j]);
                }
            }
            for(int j = 0 ; j < col ; ++j){
                for(int i = 2 ; i < row ; ++i){
                    if(matrix[i][j] > matrix[index[0][j]][j]){
                        if(matrix[index[0][j]][j] > matrix[index[1][j]][j]) index[1][j] = index[0][j];
                        index[0][j] = i;
                    }
                    else if(matrix[i][j] > matrix[index[1][j]][j]){
                        if(matrix[index[1][j]][j] > matrix[index[0][j]][j]) index[0][j] = index[1][j];
                        index[1][j] = i;
                    }
                }
                if(index[0][j] > index[1][j]){
                    int tmp = index[0][j];
                    index[0][j] = index[1][j];
                    index[1][j] = tmp;
                }
            }
            for(int i = 0 ; i < 2 ; ++i){
                for(int j = 0 ; j < col ; ++j){
                    printf("%d " , matrix[index[i][j]][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}