//program to covert characters to ascii code and back
#include <stdio.h>
#include <string.h>
int main(){
    int asc,len,i;
    char p[20];
    printf("Enter a word :");
    fgets(p,20,stdin);
    len = strlen(p);
    for (i=0; i<len-1; i++){
        asc = p[i];
        printf("%d ",asc);
    }
    return 0;
}