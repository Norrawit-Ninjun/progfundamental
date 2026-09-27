#include <stdio.h>

int main()
{
    int N,sum , min , max;
    scanf("%d" , &N);
    if(N >= 1 && N <= 1000){
        for(int i = 0; i < N; i++){
            int number[i];
            scanf("%d" , &number[i]);
            if(number[i] >= 1 && number[i] <= 1000){
                if(i == 0){
                    min = number[i];
                    max = number[i];
                } if(i != 0){
                    if(number[i] > min){
                            max = number[i];
                    }   else if(number[i] < min){
                            min = number[i];
                    }
                }
            }
        }
    }
    printf("%d" , max);
    printf("%d" , min);
}