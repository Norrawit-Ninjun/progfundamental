#include <stdio.h>

int main()
{
    int num[10] ,sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        scanf("%d" , &num[i]);
        sum += num[i];
    }
    printf("%d" , sum);
    return 0;
}