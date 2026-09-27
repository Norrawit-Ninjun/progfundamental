#include <stdio.h>

int main()
{
    int number , min , max;
    scanf("%d" , &number);
    int matrix[number][number];
    for(int i = 0; i < number ; i++){
        for(int j = 0; j < number; j++){
            printf("Number for row %d column %d : " , i+1 , j+1);
            scanf("%d" , &matrix[i][j]);
        }
    }
    for(int i = 0; i < number; i++){
        for(int j = 0; j < number; j++){
            printf("%d " , matrix[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < number; i++){
        for(int j = 0; j < number; j++){
            if(i == 0 && j == 0){
                max = matrix[i][j];
                min = matrix[i][j];
            } else if(matrix[i][j] > max){
                max = matrix[i][j];
            } else if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
    }
    printf("Min number is %d\n" , min);
    printf("Max number is %d\n" , max);
    int sum;
    for(int j = 0; j < number; j++){
        sum = 0;
        for(int i = 0; i < number; i++){
            sum+= matrix[i][j];
        }
        printf("Column %d sum = %d\n" , j+1 , sum);
    }
    for(int i = 0; i < number; i++){
        sum = 0;
        for(int j = 0; j < number; j++){
            sum += matrix[i][j];
        }
        printf("row %d sum = %d\n" , i+1 , sum);
    }
}