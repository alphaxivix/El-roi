//program to find the reverse of a word
#include <stdio.h>
#include <string.h>

void revstr(char*str){
    static int len,i,temp;
    len = strlen(str);
    if(i<len/2){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
        i++;
        revstr(str);
    }
}
int main(){
    char str[50];
    printf("Enter the string :");
    gets(str);
    printf("\nBefore reversing the string : %s\n",str);
    revstr(str);
    printf("After reversing the string : %s\n",str);
    return 0;

}