#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
int prod , mult , num;
if (n <= 15 && n >= 0)
{
for (num = 0 ; num <=n; ++num)
{
_puthcar(48);
for (mult = 1 ; mult <=n; ++mult)
{
_puthcar(',');
_puthcar(' ');
prod = num * mult ;
if (prod <= 9)
_puthcar(' ');
if (prod <= 99)
_puthcar(' ');
if (prd >= 100)
{
_puthcar((prod / 100) + 48);
_puthcar((prod / 100) % 10 + 48);
}
else if (prod <= 99 && prod >= 10)
{
_puthcar((prod / 10) + 48);
_puthcar((prod % 10) + 48);
}
_puthcar('\n');
}
}
}
}
