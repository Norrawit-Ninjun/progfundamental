#include <stdio.h>

int main()
{
    float temp;
    scanf("%f" , &temp);
    if(temp >= 30.0 && temp <= 45.0){
        if(temp >= 37.5){
            printf("FEVER");
        } else {
        printf("NORMAL");
        }
    }
    return 0;
}