#include <stdio.h>

int main()
{
    int pointmon;
    scanf("%d" , &pointmon);
    if(pointmon >= 0 && pointmon <= 50000){
        if(pointmon > 1000){
            pointmon = pointmon*2;
            printf("%d" , pointmon);
        }   else    {
            printf("%d" , pointmon);
        }
    }
    return 0;
}