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
for (num = 0 ; num <=n; num++)
for (num = 0 ; num <= n; num++)
{
_putchar(48);
for (mult = 1 ; mult <=n; mult++)
for (mult = 1 ; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
@@ -26,7 +26,7 @@ _putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + 48);
_putchar((prod / 100) % 10 + 48);
_putchar((prod / 10) % 10 + 48);
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
}
}
