#include <stdio.h>

int main()
{
    char g1 , g2;
    printf("Student grade : ");
    scanf("%c" , &g1);
    if(g1 == 'A'){
        g1 = 4;
    } else if(g1 == 'B'){
        g1 = 3;
    }
    printf("%d" , g1);
}