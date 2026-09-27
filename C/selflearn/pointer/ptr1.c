#include <stdio.h>

int main()
{
    char letter = 'D';
    int number = 10;
    float pointnum = 25.60;

    char *pointerletter;
    int *pointernumber;
    float *pointerpoint;

    pointerletter = &letter;
    pointernumber = &number;
    pointerpoint = &pointnum;

    //printf("%p\n" , pointernumber);
    //printf("%p\n" , pointerpoint);
    printf("%p\n" ,  pointerletter);
    printf("%c\n" , *pointerletter);

}