//to check whether a word is palindrome or not
#include <stdio.h>
#include <string.h>
void revstr(char*str);
int main(){
    char str[50],str1[50];
    int x;
    printf("Enter a word:");
    gets(str);
    strcpy(str1,str);
    revstr(str);
    x = strcmp(str1,str);
    if(x == 0){
        printf("This word is a palindrome!!");
    }
    else if(x != 0){
        printf("This word is not a palindrome!!");
    }
    return 0;
}
void revstr(char*str){
    static int i=0,temp,len;
    len = strlen(str);
    if (i<len/2){
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
        ++i;
        revstr(str);
    }
}