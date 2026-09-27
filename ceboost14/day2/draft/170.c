#include <stdio.h>

int main()
{
    float number[4], sum = 0, average; 
    int count = 0;
    for(int i = 0; i < 4 ; i++){
        scanf("%f", &number[i]);
        if(number[i] > 0){
            sum += number[i];
            count++;
        }
    }
    if(count > 0) {
        average = sum / count;
    } else {
        average = 0.00;
    }
    printf("Average of positives: %.2f", average);
    
    return 0;
}