//to check whether a given string is a palindrome or not
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int i,len,flag=0;
    printf("Enter a word:");
    gets(str);
    len = strlen(str);
    for (i=0; i<=len; i++){
        if(str[i] != str[len-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("%s is a palindrome!!\n");
    }
    else{
        printf("%s is not a palindrome!!\n");
    }
    return 0;
}