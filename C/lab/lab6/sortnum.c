#include <stdio.h>
#define N 10

int main()
{
    int matrix[N];
    for(int i = 0; i < N; i++){
        printf("Input number %d : " , i+1);
        scanf("%d" , &matrix[i]);
    }
    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%d " , matrix[i]);
    }
    printf("\n");
    int temp;
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N - 1; j++){
            if(matrix[j] < matrix[j+1]){
                temp = matrix[j];
                matrix[j] = matrix[j+1];
                matrix[j+1] = temp;
            }
        }  
    }
    for(int i = 0; i < N; i++){
        printf("%d " , matrix[i]);
    }
}