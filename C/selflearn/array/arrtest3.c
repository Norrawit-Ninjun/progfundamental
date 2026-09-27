#include <stdio.h>

int main()
{
    int matrix[3][3], max, min , imax , jmax , imin , jmin;
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            printf("Row %d Col %d : " , i+1, j+1);
            scanf("%d" , &matrix[i][j]);
            if(i == 0 && j == 0){
                max = matrix[i][j];
                min = matrix[i][j];
            } else if(matrix[i][j] > max){
                max = matrix[i][j];
                    imax = i; jmax = j;
            } else if(matrix[i][j] < min){
                min = matrix[i][j];
                    imin = i; jmin = j;
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }
    printf("min number %d\n" , min);
    printf("max number %d\n" , max);
    printf("min at [%d,%d]\n" , imin +1 , jmin +1 );
    printf("max at [%d,%d]\n" , imax +1 , jmax +1);
}