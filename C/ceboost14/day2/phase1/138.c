#include <stdio.h>

int main()
{
    int price; float vat;
    scanf("%d" , &price);
    vat = price + ((price/100) * 7);
    printf("%.2f" , vat);
    return 0;
}