#include <stdio.h>

int main()
{
    int N;
    scanf("%d" , &N);
    if(N >= 1 && N <= 20){
        for(int i = 0; i < N ; i++){
            printf("*");
            for(int j = 0; j < i ;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}