#include <stdio.h>

int main()
{
    struct car 
    {
        char brand[50];
        int price;
    };
    struct car car1 = {"merc" , 15};
    struct car *carptr = &car1;
    printf("%p\n" , carptr->brand);
    printf("%p\n" , &(carptr->price));
    carptr->price = 20;
    printf("%d\n" , carptr->price);
}