#include <stdio.h>

int main()
{
    int W, volume, surface;
    scanf("%d", &W);
    volume = W * W * W; 
    surface = 6 * W * W;
    printf("Volume: %d\n", volume);
    printf("Surface Area: %d\n", surface);
    
    return 0;
}