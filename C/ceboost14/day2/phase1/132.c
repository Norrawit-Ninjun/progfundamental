#include <stdio.h>

int main()
{
    int N;
    scanf("%d" , &N);
    if(N >= 1 && N <= 100000){
        if(N % 2 == 0){
            printf("EVEN");
        } else {
            printf("ODD");
        }
    }
    return 0;
}