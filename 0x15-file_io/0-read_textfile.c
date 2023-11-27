#include <stdio.h>
#include <stdlib.h>

char* read_textfile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        exit(1);
    }

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    char* buffer = malloc(size + 1);
    if (!buffer) {
        perror("Error allocating memory");
        exit(1);
    }

    fread(buffer, 1, size, file);
    buffer[size] = '\0';

    fclose(file);
    return buffer;
}

int main() {
    const char* filename = "test.txt";
    char* text = read_textfile(filename);
    printf("%s\n", text);
    free(text);
    return 0;
}
