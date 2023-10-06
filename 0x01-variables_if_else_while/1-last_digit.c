#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
    int n;
    int d;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    d = n % 10;
    
    if (d > 5)
        printf("%d is greater than 5\n", n);
    else if (d == 0)
        printf("%d is 0\n", n);
    else
        printf("%d is less than 6 and not 0\n", n);

    return (0);
}
