#include <stdio.h>

long double factorial(long double a)
{
    long double ans = 1;
    for(int i = 1; i <= a; i++){
        ans = ans * i; 
    }
    return(ans);
}
int main()
{
    int numberinput;
    printf("Input number : ");
    scanf("%d" , &numberinput);
    long double result = factorial(numberinput);
    printf("%Lf" , result);
}