#include <stdio.h>

int main()
{
    int mon , price;
    scanf("%d %d" , &price , &mon);
    if(mon >= price){
        mon -= price;
    }   else {
        return 0;
    }
    printf("%d" , mon);
    return 0;
}