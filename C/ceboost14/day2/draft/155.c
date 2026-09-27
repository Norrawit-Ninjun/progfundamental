#include <stdio.h>

int main()
{
    int number , sum = 0;
    while(1){
        scanf("%d" , &number);
        sum += number;
        if(number == 999){
            break;
        }
    }
    printf("%d" , sum-999);
}