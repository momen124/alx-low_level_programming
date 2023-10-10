#include "main.h"

/**
 * main - entry point
 * Description: print the sum of even Fibonacci numbers below 4,000,000.
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, sum = 0;
unsigned long total_sum = 0;
while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
total_sum += sum;

fib1 = fib2;
fib2 = sum;
}

printf("%lu\n", total_sum);
return (0);
}
