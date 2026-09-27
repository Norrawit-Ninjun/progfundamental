#include <stdio.h>

int main()
{
    int N;
    scanf("%d" , &N);
    switch (N)
    {
    case 1:
        printf("Cola (20 Baht)");
        break;
    case 2:
        printf("Water (10 Baht)");
        break;
    case 3:
        printf("Orange Juice (30 Baht)");
        break;
    case 4:
        printf("Coffee (25 Baht)");
        break;
    default:
        printf("Invalid Menu");
        break;
    }
}