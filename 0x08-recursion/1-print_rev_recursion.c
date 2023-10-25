#include "main.h"

/*
 *print_rev_recursion - Prints a string in reverse using recursion.
 * @s: pointer to string
 * Retrun void
 */
void _print_rev_recursion(char *s)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
