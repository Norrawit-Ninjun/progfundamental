#include <stdio.h>

int main()
{
    int width, height;
    scanf("%d", &width);
    scanf("%d", &height);
    for(int i = 1; i <= height; i++){
        if(i == 1 || i == height){
            for(int j = 1 ; j <= width ; j++){
                printf("*");
            }
        }      else{
                    for(int j = 1 ; j <= width ; j++){
                        if(j == 1 || j == width){
                            printf("*");
                        } else {
                            printf(" ");
                    }
                }
            }
        printf("\n");
    }
}