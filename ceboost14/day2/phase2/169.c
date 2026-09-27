#include <stdio.h>

int main()
{
    int N , oddnum = 0;
    scanf("%d" , &N);
    for(int i = 0 ; i < N ; i++){
        int num[i];
        scanf("%d" , &num[i]);
        if(num[i] % 2 != 0){
            oddnum++;
        }
    }
    printf("Odd numbers: %d" , oddnum);
    return 0;
}