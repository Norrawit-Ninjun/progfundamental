#include <stdio.h>

int main()
{
    int numd;
    scanf("%d" , &numd);
    if(numd >= 1 && numd <= 7){
        if(numd == 1 || numd == 2 || numd == 3 || numd == 4 || numd == 5){
            printf("WEEKDAY");
        }   else if(numd == 6 || numd == 7){
            printf("WEEKEND");
        }
    }
    return 0;
}