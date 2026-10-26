#include <stdio.h>
#include <string.h>

int main()
{
    struct userid
    {
        char name[50];
        struct usernum
        {
            int id;
            int age;
        }userpersonaldata;
    };
    struct userid userdata1 = {"Norrawit" , {69010540 , 19}};
    struct userid *pointeruserid1 = &userdata1;
    printf("%s | %p\n" , userdata1.name , pointeruserid1->name);
    printf("%d | %p\n" , userdata1.userpersonaldata.age , &(pointeruserid1->userpersonaldata.age));
    pointeruserid1->userpersonaldata.age = 20;
    strcpy(pointeruserid1->name ,  "S");
    printf("%d | %p\n" , userdata1.userpersonaldata.age , &(pointeruserid1->userpersonaldata.age));
    printf("%s | %p\n" , userdata1.name , pointeruserid1->name);
}