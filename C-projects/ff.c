//file handling using c
#include <stdio.h>
int main (){
    FILE *fptr;
    char c;
    printf("Data input \n");
    fptr = fopen("input.txt","w");
    while ((c=getchar()) != EOF){
        putc(c,fptr);
    }
    fclose(fptr);
    fptr = fopen("input.txt","r");
    while ((c=getc(fptr)) != EOF){
        printf("%c",c);
    }
    fclose(fptr);
    return 0;
}