#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num, maximumspace;
    scanf("%d", &num);
    
    maximumspace = (num * 2) - 1;
    for (int i = 1; i <= maximumspace; i++) {
        for(int j = 1; j <= maximumspace - abs(i - num); j++) {
            if (j <= abs(i - num)) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}