//program to write a name in abbrivated form
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
    char fname[15],mname[15],lname[15],abb[4];
    printf("Enter Your First Name :");
    fgets(fname,sizeof(fgets),stdin);
    printf("Enter Your Second Name:");
    fgets(mname,sizeof(mname),stdin);
    printf("Enter Your Last Name :");
    fgets(lname,sizeof(lname),stdin);
    abb[0] = toupper(fname[0]);
    abb[1] = toupper(mname[0]);
    abb[2] = toupper(lname[0]);
    abb[3] = '\0';
    printf("The abbrivated form of your name is : %s\n",abb);
    return 0;
}