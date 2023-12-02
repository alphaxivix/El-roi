#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    FILE *fptr;
    
     fptr = fopen("file3.txt", "w"); // Open the file for writing
    if (fptr == NULL) {
        printf("ERROR opening file for writing!");
        exit(1);
    }

    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fptr, "%d", num); // Write the number to the file
    fclose(fptr); // Close the file after writing

   
 // Now, let's open the file for reading
    fptr = fopen("file3.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!");
        exit(1);
    }

    fscanf(fptr, "%d", &num); // Read the number from the file
    printf("Value of num = %d\n", num);

    fclose(fptr); // Close the file after reading

    return 0;
}
