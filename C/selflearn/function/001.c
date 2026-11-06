#include <stdio.h>

int plusfunction(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int inputnumber[2];
    for(int i = 0; i < 2; i++){
        printf("input first number : ");
        scanf("%d" , &inputnumber[i]);
    }
    int output = plusfunction(inputnumber[0] , inputnumber[1]);
    printf("%d" , output);
}