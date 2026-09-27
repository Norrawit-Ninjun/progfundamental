#include <stdio.h>

int main()
{
    struct rectangle
    {
        float width;
        float height;
        float area;
        float perimeter;
    } recten1;
    printf("Enter width : ");
    scanf("%f" , &recten1.width);
    printf("Enter height : ");
    scanf("%f" , &recten1.height);
    recten1.area = recten1.width * recten1.height;
    recten1.perimeter = 2 * (recten1.width * recten1.height);
    printf("%.2f\n" , recten1.area);
    printf("%.2f\n" , recten1.perimeter);
}