#include "main.h"
#include <fcntl.h>
#include <unistd.h>

#define READ_BUF_SIZE 1024

/*
*read_textfile - read txt and print it in POSIX
*@filename: name of file to read
*@letters:num of byter to read
*Return: num of byter read/printer
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int f;
    ssize_t bytes;
    char buffer[READ_BUF_SIZE * 8];

    if (!filename || !letters)
        return (0);

    f = open(filename, O_RDONLY);
    if (f == -1)
        return (0);

    bytes = read(f, &buffer[0], letters);
    if (bytes == -1)
    {
        close(f);
        return (-1);
    }

    bytes = write(STDOUT_FILENO, &buffer[0], letters);
    if (bytes == -1)
    {
        close(f);
        return (-1);
    }

    close(f);
    return (bytes);
}
