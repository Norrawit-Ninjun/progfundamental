#include <stdio.h>

int main()
{
    int slimenum , cage , fullcage;
    scanf("%d %d" , &slimenum , &cage);
    fullcage = slimenum / cage;
    slimenum = slimenum - (fullcage * cage);
    printf("%d %d" , fullcage , slimenum);
    return 0;
}