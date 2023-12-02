//to display a person's name in abbrivated form
#include <stdio.h>
#include <string.h>
int main ()
{
    char fname[10],midname[10],lstname[10];
    printf("Enter your first name:");
    gets(fname);
    printf("Enter your second name:");
    gets(midname);
    printf("Enter your last name:");
    gets(lstname);
    printf("The Abbrivated form of your name is: %c%c%c",fname[0],midname[0],lstname[0]);
    return 0;
}