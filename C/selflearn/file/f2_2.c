#include <stdio.h>

int main()
{
    FILE *fp; //r+ คือ อ่านค่าก่อน แล้วเขียนค่าเพิ่มทีหลัง
    fp = fopen("/Users/norrawitninjun/Desktop/comenlab/C/selflearn/function/nameforfilef2_2.txt" , "r+");
    if(fp == NULL){
        printf("CAN'T OPEN FILE\n");
    } else {
        printf("CAN OPEN FILE\n");
    }
    int number;
    fscanf(fp , "%d\n" , &number);
    if(number == 0){
        printf("NO DATA");
    }
    printf("%d" , number);
    char name[2][50] = {"Norrawit" , "Ninjunnn"};
    for(int i = 0; i < 2; i++){
        fprintf(fp , "\n%s" , name[i]);
    }
}