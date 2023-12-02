//program for performing file handling
#include <stdio.h>
int main(){
    int n;
    FILE*fptr;
    fptr=(fopen("readme.txt","w"));
    if(fptr==NULL){
        printf("Error opening file!!");
        return 1;
    }
    printf("Enter the number :");
    scanf("%d",&n);
    fprintf(fptr,"%d",n);
    fclose(fptr);
    return 0;
}