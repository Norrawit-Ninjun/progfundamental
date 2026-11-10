#include <stdio.h>

struct user {
    char name[50];
};
void Myfunction(struct user *p) {
    printf("Name : ");
    scanf("%s", p->name); 
}

int main() {
    struct user username;
    Myfunction(&username); 
    printf("Result Name : %s\n", username.name);
    return 0;
}