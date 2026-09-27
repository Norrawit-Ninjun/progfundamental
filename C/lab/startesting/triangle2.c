#include <stdio.h>

int main()
{
    int size;
    scanf("%d" , &size);
    for(int i = 1; i <= size; i++){
        for(int j = 1 ; j <= size ; j++){
            if(j <= size - i) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    for(int i = 1 ; i <= size ; i++){
        for(int j = 1; j <= size ; j++){
            if(j <= i){
                printf("*");
            }
        }
        printf("\n");
    }

}