#include <stdio.h>

int main()
{
    int moneyinp;
    scanf("%d" , &moneyinp);
    if(moneyinp >= 20){
        printf("%d" , moneyinp - 20);
    } else {
        printf("INSUFFICIENT");
    }
    return 0;
}