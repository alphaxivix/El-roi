//program to print the ascii value of a character
#include <stdio.h>
int main(){
    int a;
    char b;
    printf("Enter a character:");
    scanf("%c",&b);
    a = b;
    printf("The ASCII value of %c is %d\n",b,a);
    return 0;
}