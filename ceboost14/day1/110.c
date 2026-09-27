#include <stdio.h>

int main()
{
    float amount ,gov ;
    scanf("%f" , &amount);
    if(amount >= 0 && amount <= 100000){
    gov = (amount/100)*60;
    //amount -= gov;
    printf("%.2f\n%.2f" , gov , amount - gov);
    }
    return 0;
}