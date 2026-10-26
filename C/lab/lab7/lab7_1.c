#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 10

int main(){
    float decimal[N];
    float inputnumber;
    char choice;

    for(int i = 0; i < N; i++){
        printf("Input number %d : ", i + 1);
        scanf("%f", &decimal[i]);
    }
    float *decimalpointer = decimal;
    do {
        printf("\nInput number to search: ");
        scanf("%f", &inputnumber);
        float *pointerinputnumber = &inputnumber;
        bool found = false;
        for(int i = 0; i < N; i++){
            if(*(decimalpointer + i) == *pointerinputnumber){
                printf("Found at position %d, value: %.2f\n", i + 1, *(decimalpointer + i));
                found = true;
            }   
        } 
        if (!found) {
            printf("Cannot find the matched data\n");
        }
        printf("Do you want to search again? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y'); // วนต่อถ้าพิมพ์ Y หรือ y ถ้าเจอ N จะหลุดลูปทันที
    printf("Program ended.\n");
    return 0;
}