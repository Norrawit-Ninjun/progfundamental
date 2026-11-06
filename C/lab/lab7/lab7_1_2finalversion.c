#include <stdio.h>
#include <stdbool.h>
#define N 10

int main()
{
    float number[N] , inputnumber;
    for(int i = 0; i < N; i++){
        printf("Input number : ");
        scanf("%f" , &number[i]);
    }
    float *pointernumber = &number[0];
    while(1)
    {
        printf("Input checked number : ");
        scanf("%f" , &inputnumber);
        float *pointerinputnum = &inputnumber;
        bool found = false;
        for(int i = 0; i < N; i++){
            if(*(pointernumber + i) == *pointerinputnum){
                printf("Match\n");
                found = true;
            }
        }
        if(found != true){
            printf("Cannot match\n");
        }
        char playpause;
        printf("Y / N\n");
        scanf(" %c" , &playpause);
            if(playpause == 'y' || playpause == 'Y'){
                continue;
            }if(playpause == 'n' || playpause == 'N'){
                return 0;
            }else{
                return 0;
            }
    }
}