#include <stdio.h>
#define N 3

int main()
{
    int matrix[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Input number for row %d column %d : " , i+1 , j+1);
            scanf("%d" , &matrix[i][j]);
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }
    int countone = 0 , countzero = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j){
                if(matrix[i][j] == 1){
                    countone++;
                }
            } else if(matrix[i][j] == 0){
                countzero++;
            }
        }
    }
    if(countone == 3 && countzero == 6){
        printf("The matrix is an identity matrix");
    } else {
        printf("The matrix is not an identity matrix");
    }
}