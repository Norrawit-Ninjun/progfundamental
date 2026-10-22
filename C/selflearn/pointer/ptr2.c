#include <stdio.h>

int main()
{
    int num = 42;
    int *ptrnum = &num;
    printf("%d\n" , num);
    printf("%p\n" , ptrnum);
    *ptrnum = 100;
    printf("%d\n" , *ptrnum);
    printf("%p\n" ,ptrnum);
}