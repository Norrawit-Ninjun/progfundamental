#include <stdio.h>

int main()
{
    int number[5] = {1 ,2 , 3 , 4 , 5};
    int *ptrnumber = &number;
    for(int i = 0; i < 4; i++){
        printf("%d\n" , *ptrnumber + i);
        printf("%p\n" , ptrnumber + i);
    }
}