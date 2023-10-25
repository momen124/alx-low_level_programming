#include "main.h"

/*
 * rev_recursion - print the stirng inverse
 * @s: pointer to string
 *
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
