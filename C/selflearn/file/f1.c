#include <stdio.h>

int main()
{
    FILE *fp;
    int number;
    char str1[20];
    fp = fopen("/Users/norrawitninjun/Desktop/comenlab/C/selflearn/function/nameforfilef1.txt" , "r");
    if(fp == NULL){
        printf("Can't open file");
        return 0;
    }
    fscanf(fp , "%[^\n]" , str1);
    fscanf(fp , "%d" , &number);
    printf("strings : %s" , str1);
    printf("integer : %d" , number);
    fclose(fp);

}