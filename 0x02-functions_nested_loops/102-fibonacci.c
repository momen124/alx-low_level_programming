#include "main.h"

/**
 * main - entry point
 * Description: print the first 50 Fibonacci numbers.
 *
 * Return: Always 0
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);

if (count == 49)
printf("\n");
else
printf(", ");
fib1 = fib2;
fib2 = sum;
}

return (0);
}
