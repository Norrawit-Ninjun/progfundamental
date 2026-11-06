#include <stdio.h>

struct userfirstnlast
{
    char firstname[50];
    char lastname[50];
};
struct personalinfo
{
    int userid;
    int userage;
    struct userfirstnlast usernameinfo;
};
struct personalinfo usernumber1;
int main()
{
    scanf("%s" , usernumber1.usernameinfo.firstname);
}