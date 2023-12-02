#include <stdio.h>
#include <string.h>

void replace(char str[], char sub[], char nstr[]) {
    int strLen, sublen, nstrlen;
    int i, j, k;
    int flag = 0, start, end;

    // Finding the string lengths...
    strLen = strlen(str);
    sublen = strlen(sub);
    nstrlen = strlen(nstr);

    // String manipulation...
    for (i = 0; i < strLen; i++) {
        flag = 0;
        start = i;
        for (j = 0; str[i] == sub[j]; j++, i++)
            if (j == sublen - 1)
                flag = 1;

        if (flag == 1) {
            end = i; // Moved this line outside the loop

            for (j = start; j < end; j++) {
                for (k = start; k < strLen; k++)
                    str[k] = str[k + 1];
                strLen--;
                i--;
            }

            for (j = start; j < start + nstrlen; j++) {
                for (k = strLen; k >= j; k--)
                    str[k + 1] = str[k];
                str[j] = nstr[j - start];
                strLen++;
                i++;
            }
        }
    }
    str[strLen] = '\0'; // Null-terminate the modified string
}

int main() {
    char str[50], sub[20], nstr[50];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the substring to be removed:\n");
    scanf("%s", sub);
    printf("Enter the new substring:\n");
    scanf("%s", nstr);
    replace(str, sub, nstr);
    printf("The modified string is: %s\n", str);
    return 0;
}
