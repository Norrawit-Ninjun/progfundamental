#include <stdio.h>

int main()
{
    int kwaang , yaaw , area;
    scanf("%d %d" , &kwaang , &yaaw);
    if(kwaang >= 1 && kwaang <= 1000 && yaaw >= 1 && yaaw <= 1000)
    area = kwaang * yaaw;
    printf("%d" , area);
    return 0;
}