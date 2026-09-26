#include <stdio.h>

int main()
{
    struct userid
    {
        char name[50];
        int number;
        int year;
        float gpa;
    };
    struct userid student1;
        printf("Name : ");
            scanf("%s" , student1.name);
        printf("Student number : ");
            scanf("%d" , &student1.number);
        printf("Year : ");
            scanf("%d" , &student1.year);
        printf("GPA : ");
            scanf("%f" , &student1.gpa);

        printf("Name : %s \n" , student1.name);
        printf("student number : %d \n" , student1.number);
        printf("Year : %d\n" , student1.year);
        printf("GPA : %.2f " , student1.gpa);
        if(student1.gpa <= 4.00 && student1.gpa >= 3.50){
            printf("Honor");
    }
}