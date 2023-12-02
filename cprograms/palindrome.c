//prog  to find a palindrome 
#include <stdio.h>
#include <string.h>
void main(){
    char str1[25];
    int i,flag=0,length;
    printf("Enter a word:");
    gets(str1);
    length = strlen(str1);  

    for (i = 0; i<(length/2); i++){
        if (str1[i] == str1[length-1-i])
            flag = flag+1;
    }
    if (flag == (length/2)-1)
        printf("%s is a Palindrome!! %d", str1,flag);
    else 
        printf("$s is not a Palindrome!!",str1);
}