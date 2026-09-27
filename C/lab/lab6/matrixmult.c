#include <stdio.h>
#define N 3

int main()
{
    int matrixA[N][N] , matrixB[N][N] , matrixC[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Input number for row %d column %d : " , i+1 , j+1);
            scanf("%d" , &matrixA[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("Input number for row %d column %d : " , i+1 , j+1);
            scanf("%d" , &matrixB[i][j]);
        }
    }
    printf("\n");
    printf("Matrix A : \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d " , matrixA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix B : \n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d " , matrixB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int sum;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            sum = 0;
            for(int k = 0; k < N; k++){
                sum += matrixA[i][k] * matrixB[j][i];
            }
            matrixC[i][j] = sum;
        }
    }
    printf("The matrix C = A * B is:\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%5d", matrixC[i][j]);
        }
        printf("\n");
    }
}