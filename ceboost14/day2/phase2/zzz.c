#include <stdio.h>

int main()
{
    int i = 1 , final , sum = 0 , numbersum;
    scanf("%d" , &final);
    while(sum <= final){
        scanf("%d" , &numbersum);
        sum += numbersum;
        printf("round %d sum = %d\n" , i , sum);
        i++;
    }
}