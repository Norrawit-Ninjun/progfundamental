#include <stdio.h>
#define N 50

void swap(char *s1, char *s2);
void show_messages(char *s);

int main()
{
    int i , a, b;
    char str[5][N];
    for(i = 0; i < 5; i++) {
        printf("Enter message %d: ", i + 1);
        scanf("%s", str[i]);
    }
    while(1) {
        show_messages((char *)str);
        printf("Enter index a and b to swap: ");
        if (scanf("%d %d", &a, &b) != 2) {
            break;
        }
        if(a < 0 || a >= 5 || b < 0 || b >= 5) {
            break;
        }
        swap(str[a], str[b]);
    }
    printf("END PROGRAM\n");
    return 0;
}
void swap(char *s1, char *s2)
{
    int i;
    char temp[N];
    
    for(i = 0; i < N; i++) {
        temp[i] = s1[i];
        s1[i] = s2[i];
        s2[i] = temp[i];
    }
}
void show_messages(char *s)
{
    int i;
    printf("\n--- Current Messages ---\n");
    for(i = 0; i < 5; i++) {
        printf("%d: %s\n", i + 1, (s + (i * N)));
    }
    printf("------------------------\n");
}