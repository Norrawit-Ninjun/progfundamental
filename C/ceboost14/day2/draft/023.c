#include <stdio.h>

int main()
{
    int N , min , max ,sum =0; float average;
    scanf("%d" , &N);
    if(N >= 1 && N<= 1000){
    for(int i = 0; i < N ; i++){
        int number[i];
        scanf("%d" , &number[i]);
        if(number[i] >= -10000 && number[i] <= 10000){
        sum += number[i];
        if(i == 0){
            min = number[i];
            max = number[i];
        }   else if(number[i+1] > number[i]){
                min = number[i];
                max = number[i+1];
        }   else if(number[i+1] < number[i]){
                min = number[i+1];
                max = number[i];   
            }
            if(i == 5){
                if(number[5] > )
            }
        }
    }
}
    average = sum / N;
    printf("%d\n" , max);
    printf("%d\n" , min);
    printf("%.2f\n" , average);
}