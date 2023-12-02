//program for performing file handling
#include <stdio.h>
int main(){
    int n;
    FILE*fptr;
    fptr=(fopen("readme.txt","r"));
    if(fptr==NULL){
        printf("Error opening file!!");
        return 1;
    }
    fscanf(fptr,"%10d",&n);
    printf("the number :%10d",n);
    fclose(fptr);
    return 0;
}