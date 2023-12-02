//to find the number of words in a sentence 
#include <stdio.h>
#include <string.h>

int main(){
    char s[200];
    int count=1,i,slen;

    printf("Enter the sentence :");
    gets(s);
    slen = strlen(s);
    for(i=0; i<=slen; i++){
        if (s[i] == ' ' && s[i+1] != ' '){
            count++;
        }
    }
    printf("The sentence has %d words\n",count);
    printf("%d",slen);
    return 0;
}