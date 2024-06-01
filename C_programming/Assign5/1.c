#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* capitalizeWords(char* str) {
    int length = strlen(str);
    char* modifiedStr = malloc(length + 1); // Allocate memory for the modified string
    int i;

    for (i = 0; i < length; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            modifiedStr[i] = toupper(str[i]);
        } else {
            modifiedStr[i] = str[i];
        }
    }

    modifiedStr[i] = '\0'; // Add null terminator to the end of the modified string

    return modifiedStr;
}

int main() {
    char str[] = "hello world";
    char* modifiedStr = capitalizeWords(str);
    printf("Modified string: %s\n", modifiedStr);
    free(modifiedStr); // Free the dynamically allocated memory
    return 0;
}
