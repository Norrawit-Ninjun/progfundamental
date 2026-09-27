#include <stdio.h>

int main()
{
    int yaaw , min , sec , totaltime; float speed;
    scanf("%d %d %d" , &yaaw , &min , &sec);
    totaltime = (min * 60) + sec; 
    speed = (float)yaaw / totaltime;
    printf("Total Time:%d s\nSpeed:%.2f m/s" , totaltime , speed);
    return 0;
}