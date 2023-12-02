#include <stdio.h>
#include <stdlib.h> 
int main(){
    int num;
    FILE*fptr;
    fptr = fopen("file2.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!");
        exit(1);
    }

    fscanf(fptr, "%d", &num); // Read the number from the file
    printf("Value of num = %d\n", num);

    fclose(fptr); // Close the file after reading

    return 0;
 }
 