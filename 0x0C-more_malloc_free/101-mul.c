#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * multiply - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 */
void multiply(char num1[], char num2[])
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));
    int i, j;
    int start;

    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (i = len1 - 1; i >= 0; i--) {
        for (j = len2 - 1; j >= 0; j--) {
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
            result[i + j] += result[i + j + 1] / 10;
            result[i + j + 1] %= 10;
        }
    }

    /* Print the result */
    start = 0;
    while (start < len1 + len2 - 1 && result[start] == 0) {
        start++;
    }

    for (i = start; i < len1 + len2; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    free(result);
}

int isNumeric(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Non-digit character found
        }
        str++;
    }
    return 1; // All characters are digits
}

int main(int argc, char *argv[])
{
    if (argc != 3) {
        fprintf(stderr, "Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!isNumeric(num1) || !isNumeric(num2)) {
        fprintf(stderr, "Error\n");
        return 98;
    }

    multiply(num1, num2);

    return 0;
}
