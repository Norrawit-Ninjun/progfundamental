#include <stdio.h>

int main()
{
    int kwang , yaaw ,Area ,Perimeter;
    scanf("%d %d" , &kwang , &yaaw);
    Area = kwang * yaaw;
    Perimeter = (kwang + yaaw) * 2;
    printf("%d %d" , Area , Perimeter);
    return 0;
}