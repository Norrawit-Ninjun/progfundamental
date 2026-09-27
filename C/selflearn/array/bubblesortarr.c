#include <stdio.h>

int main()
{
    int number , temp;
    scanf("%d" , &number);
    int matrix[number];
    for(int i = 0; i < number; i++){
        scanf("%d" , &matrix[i]);
    } 
        for(int i = 0; i < number; i++){
            printf("%d " , matrix[i]);
        }
    printf("\n");
    for(int i = 0; i < number; i++){
        for(int j = 0; j < number - 1; j++){
            if(matrix[j] > matrix[j + 1]){
                temp = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < number; i++){
        printf("%d " , matrix[i]);
    }
}