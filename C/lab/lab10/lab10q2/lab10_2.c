#include <stdio.h>

int main()
{
    FILE *fp1;
        char filename[50] , textinfile[50] , textcopyinfile[50];
        printf("Input file name : ");
        scanf("%s" , filename);
        fp1 = fopen(filename ,  "w");
        if(fp1 == NULL){
            printf("CANT OPEN\n");
        } else {
            printf("CAN OPEN\n");
        }
        fprintf(fp1 , "Hi My name is Norrawit Ninjun");
        fclose(fp1);
        fp1 = fopen(filename , "r");
        fscanf(fp1 , "%[^\n]" , textinfile);
        printf("text from original file : %s\n" , textinfile);
        fclose(fp1);
    FILE *fp2;
        char filenamecopy[50];
        printf("Input file name : ");
        scanf("%s" , filenamecopy);
        fp2 = fopen(filenamecopy , "w");
        fprintf(fp2 , "%s" , textinfile);
        fclose(fp2);
        fp2 = fopen(filenamecopy , "r");
        fscanf(fp2 , "%[^\n]" , textcopyinfile);
        printf("text from original file : %s" , textcopyinfile);
        fclose(fp2);
}