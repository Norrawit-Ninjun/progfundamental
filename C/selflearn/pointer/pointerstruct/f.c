#include <stdio.h>
#define N 3

struct user
{
    char name[50];
};
int main()
{
    struct user username[N] = {"Norrawit" , "Ninjun" , "sept"};
    struct user *userpointer = username;
    for(int i = 0; i < N; i++){
        printf("%s\n" , (userpointer + i)->name);
    }
}