#include <stdio.h>

int main()
{
    int age , price;
    scanf("%d" , &age);
    if(age >= 1 && age <= 120){
        if(age <= 12){
            price = 80;
            }   else    {
                price = 140;
            }
        printf("%d" , price);
    }

    return 0;
}