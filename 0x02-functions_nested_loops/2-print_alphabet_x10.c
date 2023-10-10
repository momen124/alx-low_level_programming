#include "main.h"

/**
 * print_alphabet_x10 - print a - z
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int r, ch;
for ( r = 0; r <= 9; r++)
{
for (ch = 'a' ; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
