#include <stdio.h>

int main()
{
    int number = 889 , check = 30 ,sum = 0;
    for(int i = 2 ; i <= check ; i++){
        if(number % i == 0){
            sum++;
            printf("%d\n" , i);
        }
    }
    printf("%d" , sum);
}