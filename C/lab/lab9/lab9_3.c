#include <stdio.h>

void primecheck(int);
int main()
{
    int first , last;
    printf("first number : ");
    scanf("%d" , &first);
    printf("last number : ");
    scanf("%d" , &last);
    for(int i = first; i <= last; i++){
        primecheck(i);
    }
    printf("\n");
}
void primecheck(int checknumber)
{
    if(checknumber <= 1)
    {
        return;
    }
    int count = 0;
    for(int i = 1; i <= checknumber; i++)
    {
        if(checknumber % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("%4d" , checknumber);
    }
}