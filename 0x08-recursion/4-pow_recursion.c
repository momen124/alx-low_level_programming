#include "main.h"

/**
*_pow_recursion - give the pow of x to y
*@x: int
*@y: int
*
*Return:int
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
return (x * _pow recursion(x, y - 1));
}
