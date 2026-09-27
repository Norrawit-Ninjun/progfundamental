#include <stdio.h>

int main()
{
    int strings , countchar, countsentence = 0;
    scanf("%d" , &strings);
    char name[strings];
    scanf(" %[^\n]" , &name[strings]);
    for(int i = 0; i < strings; i++){
        countchar = 0;
        if(name[i] >= 65 && name[i] <= 90 || name[i] >= 97 && name[i] <= 122){
            countchar++;
        } else if(name[i] == ' '){
            //countsentence;
            for(int j = 0; j < i;j++){
                printf("%c" , name[j]);
            }
            printf("");
        }
    }
}