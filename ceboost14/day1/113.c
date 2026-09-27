#include <stdio.h>

int main()
{
    int N , Q; float P ,bane;
    scanf("%d %f %d" , &N ,  &P , &Q);
    if(N >= 1 && N <= 1000000 && P >= 0.01 && Q <= 1000000){
        bane = (Q - P) * N;
        printf("%.2f" , bane);
    }
    return 0;
}