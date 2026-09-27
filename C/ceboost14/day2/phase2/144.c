#include <stdio.h>

int main()
{
    int A,B,C; float average;
    scanf("%d %d %d" , &A , &B , &C);
    average = (A+B+C)/3.0;
    printf("Average: %.2f" , average);
    return 0;
}