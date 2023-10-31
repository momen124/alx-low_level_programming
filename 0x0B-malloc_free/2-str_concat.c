#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;
    }

    int length = _strlen(str);
    char *duplicate = (char *)malloc(length + 1); // +1 for the null terminator

    if (duplicate == NULL) {
        return NULL; // Memory allocation failed
    }

    for (int i = 0; i < length; i++) {
        duplicate[i] = str[i];
    }

    duplicate[length] = '\0'; // Null-terminate the duplicated string
    return duplicate;
}