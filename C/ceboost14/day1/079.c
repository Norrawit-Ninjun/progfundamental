#include <stdio.h>

int main()
{
    char yorname ; char name[20] ; int age;
    scanf("%c %s %d" , &yorname , &name , &age);
    printf("Hello , %c. %s! You are %d years old" , yorname , name , age);
    return 0;
}