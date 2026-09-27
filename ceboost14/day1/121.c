#include <stdio.h>

int main()
{
    int C; float F;
    scanf("%d" , &C);
    F = (C * 9.0 / 5.0) + 32;
    printf("%.2f" , F);
    return 0;
}