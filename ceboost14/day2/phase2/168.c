#include <stdio.h>

int main()
{
    int N;
    scanf("%d" , &N);
    for(int i = 0; N > i ; N--){
        printf("%d\n" , N);
        if(N == 1){
            printf("Launch!");
        }
    }
    return 0;
}