#include <stdio.h>

int main()
{
    int N;
    scanf("%d" , &N);
    if(N >= 1 && N <= 100){
        for(int i = 0 ; N > i ; N--){
            printf("%d " , N);
        }
    }
    return 0;
}