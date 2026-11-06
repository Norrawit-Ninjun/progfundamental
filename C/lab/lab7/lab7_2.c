#include <stdio.h>
#include <stdbool.h>
#define N 5

struct studentuni
{
    char firstname[50];
    char lastname[50];
    int userid;
    int telephone;
    struct curriculum
    {
        char programing;
        char physics;
        char calculus;
        char computerbasics;
    }curriculumstudent;
};

int main()
{
    int inputsearchstudentnumber;
    struct studentuni personaldata[N];
    struct studentuni *pointerpersonaldata = personaldata;
    for(int i = 0; i < N; i++){
        printf("student number %d\n" , i+1);
        printf("firstname : ");
        scanf("%s" , (pointerpersonaldata+ i)->firstname);
        printf("lastname : ");
        scanf("%s" , (pointerpersonaldata + i)->lastname);
        printf("id : ");
        scanf("%d" , &(pointerpersonaldata + i)->userid);
        printf("tel : ");
        scanf("%d" , &(pointerpersonaldata + i)->telephone);
        printf("Grade programming : ");
        scanf("%c" , &(pointerpersonaldata + i)->curriculumstudent.programing);
        printf("Grade physics : ");
        scanf("%c" , &(pointerpersonaldata + i)->curriculumstudent.physics);
        printf("Grade calculus : ");
        scanf("%c" , &(pointerpersonaldata + i)->curriculumstudent.calculus);
        printf("Grade computerbasics : ");
        scanf("%c" , &(pointerpersonaldata + i)->curriculumstudent.computerbasics);
    }
    while(true)
    {
        char choice;
        printf("search student id : ");
        scanf("%d" , &inputsearchstudentnumber);
        int *pointersearchnum = &inputsearchstudentnumber;
        bool found = false;
        for(int i = 0; i < N; i++){
            if((pointerpersonaldata + i)->userid == *pointersearchnum){
                printf("Match at %p or %d " , pointersearchnum , *pointersearchnum);
                found = true;
            }
        }
        if(found != true){
            printf("Cannot match");
        }
        printf("Y/N");
        scanf("%c" , &choice);
        if(choice == 'Y' || choice == 'y'){
            continue;
        }   if(choice == 'N' || choice == 'n'){
            return 0;
        }   else{
            return 0;
        }
    }
    return 0;
}