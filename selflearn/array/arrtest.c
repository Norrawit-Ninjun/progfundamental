#include <stdio.h>

int main()
{
    int stunum , range[4] = {0,0,0,0};
    float sum;
        printf("Input student number : ");
    scanf("%d" , &stunum);
    int height[stunum];
    sum = 0;
    for(int i = 0; i < stunum; i++){
            printf("Student %d height : " , i+1);
        scanf("%d" , &height[i]);
        if(height[i] >= 0 && height[i] <= 160){
            range[0]++;
            sum+=height[i];
        }else if(height[i] >= 161 && height[i] <= 170){
            range[1]++;
            sum+=height[i];
        }else if(height[i] >= 171 && height[i] <= 180){
            range[2]++;
            sum+=height[i];
        }else if(height[i] >= 180 && height[i] <= 200){
            range[3]++;
            sum+=height[i];
        }
    }
    printf("Average height is %.2f\n" , sum / stunum);
    printf("Student at range 1 : %d\n" , range[0]);
    printf("Student at range 2 : %d\n" , range[1]);
    printf("Student at range 3 : %d\n" , range[2]);
    printf("Student at range 4 : %d\n" , range[3]);
}
