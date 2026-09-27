#include <stdio.h>

int main()
{
    int nump;
    scanf("%d" , &nump);
    if(nump >= 1 && nump <= 50){
        for(int i = 0; i < nump ; i++){
            printf("POST");
        }
    }
    return 0;
}