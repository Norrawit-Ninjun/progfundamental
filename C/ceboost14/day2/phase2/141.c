#include <stdio.h>

int main()
{
    char name[100]; int age; float power;
    scanf("%s %d %f" , name , &age , &power);
    printf("Welcome, %s!\n" , name);
    printf("Age: %d" , age);
    printf("Power: %.2f" , power);
    return 0;
}
#include <stdio.h>