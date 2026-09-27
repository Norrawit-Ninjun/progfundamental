//ระบบจัดการข้อมูลนักเรียนและผลการเรียน (ระดับพื้นฐาน)
#include <stdio.h>
#define N 3

int main()
{
    struct student
    {
        char firstname[20];
        char lastname[20];
        struct score
        {
            float theoryscore;
            float lab;
            float summativescore;
            float totalscore;
        }scoredata;
        struct birthdaydate
        {
            int day;
            int month;
            int years;
        } birth;
    } studentdata[N];
        printf("------------------BEGIN OF SCANF-----------------------\n");
    for(int i = 0; i < N; i++){
        studentdata[i].scoredata.totalscore = 0;
        printf("\n");
        printf("Student number %d name is : " , i+1);
        scanf("%s" , studentdata[i].firstname);
        printf("lastname : ");
        scanf("%s" , studentdata[i].lastname);
        printf("birthday : ");
        scanf("%d %d %d" , &studentdata[i].birth.day,
                           &studentdata[i].birth.month,
                           &studentdata[i].birth.years);
        printf("Student number %d score is : " , i+1);
        scanf("%f %f %f" , &studentdata[i].scoredata.theoryscore ,
                                 &studentdata[i].scoredata.lab ,
                                 &studentdata[i].scoredata.summativescore);
            studentdata[i].scoredata.totalscore += studentdata[i].scoredata.theoryscore;
            studentdata[i].scoredata.totalscore += studentdata[i].scoredata.summativescore;
            studentdata[i].scoredata.totalscore += studentdata[i].scoredata.lab;
    }
        printf("------------------END OF SCANF------------------------\n");
        printf("\n");
    for(int i = 0;i < N; i++){
        printf("------------BEGIN OF STUDENT NUMBER %d --------------\n" , i+1);
        printf("\nstudent name is %s %s\n" , studentdata[i].firstname , studentdata[i].lastname);
        printf("%s %s 's birthday is %d/%d/%d\n" , studentdata[i].firstname , studentdata[i].lastname , studentdata[i].birth.day , studentdata[i].birth.month , studentdata[i].birth.years);
        printf("Total score is : %.2f\n" , studentdata[i].scoredata.totalscore);
        printf("-------------END OF STUDENT NUMBER %d ---------------\n" , i+1);
    }
    int min = 0;
    int max = 0;
    for(int i = 1; i < N; i++){
        if(studentdata[i].scoredata.totalscore < studentdata[min].scoredata.totalscore){
            min = i;
        }
        if(studentdata[i].scoredata.totalscore > studentdata[max].scoredata.totalscore){
            max = i;
        }
    }
    printf("Max Score: %s %s (%.2f)\n", 
        studentdata[max_idx].firstname, 
        studentdata[max_idx].lastname, 
        studentdata[max_idx].scoredata.totalscore);

    printf("Min Score: %s %s (%.2f)\n", 
        studentdata[min_idx].firstname, 
        studentdata[min_idx].lastname, 
        studentdata[min_idx].scoredata.totalscore);
} 