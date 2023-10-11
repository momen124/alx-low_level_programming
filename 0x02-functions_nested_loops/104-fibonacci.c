#include "main.h"
#include <stdio.h> 

/**
 * numLength - returns the length of a number
 * @num: operand number.
 *
 * Return: number of digits
 */
int numLength(unsigned long num)
{
    int length = 0;
    if (num == 0)
        return 1;

    while (num > 0)
    {
        num = num / 10;
        length++;
    }
    return length;
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers.
 * starting with 1 and 2, followed
 * Return: Always 0
 */
int main(void)
{
    int count, initial_zeros;
    unsigned long f1 = 1, f2 = 2, sum, max = 100000000, f1o = 0, f2o = 0, sumo = 0;

    for (count = 1; count <= 98; count++)
    {
        if (f1o > 0)
            printf("%lu", f1o);

        initial_zeros = numLength(max) - numLength(f1);
        while (f1o > 0 && initial_zeros > 0)
        {
            printf("%d", 0);
            initial_zeros--;
        }

        printf("%lu", f1);

        sum = (f1 + f2) % max;
        sumo = f1o + f2o + (f1 + f2) / max;

        f1 = f2;
        f1o = f2o;
        f2 = sum;
        f2o = sumo;

        if (count != 98)
            printf(", ");
        else
            printf("\n");
    }
    return (0);
}
