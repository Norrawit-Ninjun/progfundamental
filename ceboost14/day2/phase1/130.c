#include <stdio.h>

int main()
{
    int password;
    scanf("%d" , &password);
    if (password == 1234)
    {
        printf("GRANT");
    }   else {
        printf("DENIED");
    }
    return 0;
}