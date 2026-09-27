#include <stdio.h>

int main()
{
    int numcheck;
    scanf("%d" , &numcheck);
    if(numcheck % 2 == 0){
        printf("OPEN");
    }   else    {
        printf("CLOSE");
    }
    return 0;
}