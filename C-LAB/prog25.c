//program to demonstrate file handling by writing a user provided number to file.txt and then reading the same number
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    FILE *fptr;
    //opening the file for writing 
    fptr = fopen("number.txt","w");
    if(fptr == NULL){
        printf("Error opening the file!!");
        exit(1);
    }
    printf("Enter a number :");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    //opening file for reading
    if((fptr=fopen("number.txt","r"))==NULL){
        printf("Error opoening the file!!");
        exit(1);
    }
    fscanf(fptr,"%d",&num);
    printf("Value is = %d",num);
    fclose(fptr);
    return 0;
}