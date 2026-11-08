#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("/Users/norrawitninjun/Desktop/comenlab/C/selflearn/function/namefileforf2.txt" , "w");
    if(fp == NULL)
    {
        printf("Can't open file");
        return 0;
    }
    printf("Open file complete\n");
    for(int i = 0; i < 3; i++){
        fprintf(fp , "%d\n" , i+1);
    }
    fclose(fp);

    fp = fopen("/Users/norrawitninjun/Desktop/comenlab/C/selflearn/function/namefileforf2.txt" , "r");
    int number[3];
    for(int i = 0; i < 3; i++){
    fscanf(fp , "%d" , &number[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("%d\n" , number[i]);
    }
    fclose(fp);

    fp = fopen("/Users/norrawitninjun/Desktop/comenlab/C/selflearn/function/namefileforf2.txt" , "w");
    printf("can open file\n");
    char name[3][50] = {"Norrawit" , "Ninjun" , "septawit"};
    for(int i = 0; i < 3; i++){
        fprintf(fp , "%s %d\n" , name[i] , number[i]);
    }
    fclose(fp);

    fp = fopen("/Users/norrawitninjun/Desktop/comenlab/C/selflearn/function/namefileforf2.txt" , "r");
    for(int i = 0; i < 3 ; i++){
    fscanf(fp , "%s %d\n" , name[i] , &number[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("%s %d\n" , name[i] , number[i]);
    }
}