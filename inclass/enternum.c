#include <stdio.h>

int main()
{
    int number , count;
    scanf("%d" , &number);
    for(int i = 1 ; i <= number; i++){
        count = 0;
        for(int j = 1; j <= i ; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
        printf("%d\n" , i);
        }
    }
}