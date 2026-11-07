#include <stdio.h>

int main()
{
    int findmax(int , int);
    int number[2];
    for(int i = 0; i < 2; i++){
        printf("Input number %d : " , i+1);
        scanf("%d" , &number[i]);
    }
    int result = findmax(number[0] , number[1]);
    printf("%d" , result);
}
int findmax(int a , int b)
    {
        int max;
            if( a < b){
                max = b;
            }else {
                max = a;
            }
        return max;
    }