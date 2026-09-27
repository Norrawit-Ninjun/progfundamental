#include <stdio.h>

int main(){
    float Concurrent; int H , T;
    scanf("%d %d" , &H , &T);
    if(H >= 1 && H <= 10000000 && T >= 1 && T<= 180){
    Concurrent = ((float)H * T) / 60;
    printf("%.2f" , Concurrent);
    }
    //printf("%.2f" , Concurrent);
    return 0;
}