#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: integer to find square root of
*
* Return: natural square root or -1
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}

/**
* _sqrt_helper - helper function to calculate square root
* @n: number to calculate square root of
* @i: iterator
*
* Return: natural square root or -1
*/
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}
