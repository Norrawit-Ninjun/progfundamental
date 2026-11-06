#include <stdio.h>

struct personalinfo
{
    int userid;
    int userage;
    struct userfirstnlast
    {
        char firstname[50];
        char lastname[50];
    }username;
}infopersonal;

int main()
{
    scanf("%s" , infopersonal.username.firstname);
    scanf("%s" , infopersonal.username.lastname);
}