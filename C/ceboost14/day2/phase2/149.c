#include <stdio.h>

int main()
{
    int kai , numkai , remain;
    scanf("%d" , &kai);
    if(kai >= 0 && kai <= 10000){
        numkai = kai / 30;
        remain = kai - (numkai * 30);
    }
    printf("%d %d" , numkai , remain);
    return 0;
}