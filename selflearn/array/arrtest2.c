#include <stdio.h>

int main()
{
    int matrix[3][3];
    for(int i = 1; i <= 3 ; i++){
        for(int j = 1; j <= 3; j++){
            printf("Row %d Col %d : " , i, j);
            scanf("%d" , &matrix[i][j]);
        }
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 3; j++){
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }
}