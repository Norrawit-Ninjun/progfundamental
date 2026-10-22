#include <stdio.h>

int main()
{
    int number[5] = {10 , 20 , 30 , 40 ,50};
    int *pointernumber = &number[0];
    for(int i = 0; i < 5; i++){
        printf("%d\n" , *pointernumber);
        printf("%p\n" , pointernumber);
        pointernumber++;
    }
}