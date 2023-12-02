#include <stdio.h>
#include <string.h>

void replace(char str[], const char sub[], const char nstr[]) {
    int strLen = strlen(str);
    int subLen = strlen(sub);
    int nstrLen = strlen(nstr);

    char newStr[1000];  // Assuming a maximum string length

    int i, j, k, found;

    for (i = 0; i < strLen; i++) {
        found = 1;
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            for (j = 0; j < nstrLen; j++) {
                newStr[i + j] = nstr[j];
            }
            i += subLen - 1;  // Skip over the replaced substring
        } else {
            newStr[i] = str[i];
        }
    }

    newStr[i] = '\0';

    strcpy(str, newStr);
}

int main() {
    char str[1000], sub[100], nstr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the newline character.

    printf("Enter the substring to be removed:\n");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';  // Remove the newline character.

    printf("Enter the new substring:\n");
    fgets(nstr, sizeof(nstr), stdin);
    nstr[strcspn(nstr, "\n")] = '\0';  // Remove the newline character.

    replace(str, sub, nstr);
    printf("The modified string is: %s\n", str);

    return 0;
}
