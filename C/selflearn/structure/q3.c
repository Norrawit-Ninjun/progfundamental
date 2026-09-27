#include <stdio.h>

int main()
{
    struct studentid
    {
        char name[50];
        int age;
        int studentnumber;
    };
    int count;
    printf("Number of student : ");
    scanf("%d" , &count);
    struct studentid studentdata[count];
    for(int i = 0 ; i < count ;i++){
        printf("fill student number %d data\n" , i+1);
        printf("Enter student name : ");
        scanf("%s" , studentdata[i].name);
        printf("Enter age : ");
        scanf("%d" , &studentdata[i].age);
        printf("Enter student id : ");
        scanf("%d" , &studentdata[i].studentnumber);
        printf("\n");
    }
    printf("Dispay Student Data\n");
    for(int i = 0; i < count; i++){
        printf("\nStudent number %d\n" , i+1);
        printf("Student name : %s\n" , studentdata[i].name);
        printf("Student age : %d\n" , studentdata[i].age);
        printf("Student id : %d\n" , studentdata[i].studentnumber);
    }
}