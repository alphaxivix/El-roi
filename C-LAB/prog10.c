//program to reverse a string using recursion function
#include <stdio.h>
#include <string.h>
void revstr(char*str);
int main(){
    char str[50],str1[50];
    printf("Enter a Word:");
    gets(str);
    printf("Before Reversing the string : %s\n",str);
    revstr(str);
    printf("After reversing the string : %s\n",str);
    return 0;
}
void revstr(char *str){
    static int i=0,len,temp;
    len = strlen(str);
    if (i<len/2){
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-i-1] = temp;
        ++i;
        revstr(str);
    }
}