#include <stdio.h>

int main()
{
    int U; float R , P;
    scanf("%d %f" , &U , &R);
    if(U >= 1 && U <= 10000 && R >= 1.00 && R <= 10.00){
        P = U * R;
    }
    printf("%.2f" , P);
    return 0;
}