#include <stdio.h>
#include <string.h>

int main() {
    char name[25];
    int i, length;
    int flag = 0;
    
    printf("Enter a word: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove the newline character if present
    length = strlen(name);
    if (name[length - 1] == '\n') {
        name[length - 1] = '\0';
        length--;
    }

    for (i = 0; i < length / 2; i++) {
        if (name[i] != name[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%s is a palindrome\n", name);
    } else {
        printf("%s is not a palindrome\n", name);
    }

    return 0;
}
