#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char password[10], p[] = "admin";
    int len = strlen(p);
    int attempts = 3;
    bool accessGranted = false;

    while (attempts > 0) {
        printf("Enter the password: ");
        scanf("%9s", password);  // Limit the input to 9 characters to prevent buffer overflow

        if (strcmp(password, p) == 0) {
            printf("Access Granted!\n");
            accessGranted = true;
            break;
        } else {
            attempts--;
            printf("Permission denied. %d %s left.\n", attempts, attempts == 1 ? "attempt" : "attempts");
        }
    }

    if (!accessGranted) {
        printf("Access denied. Exiting...\n");
    }

    return 0;
}
