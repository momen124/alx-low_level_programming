#inculde "mian.h"

/**
* _strlen_recursion - return the length
*@s: pointer to string 
*
*Return: void
*/

int _strlen_recursion(char *s)
{
int n = 0;

if (*s > '\0')
{
n += _strlen_recursion(s +1) +1;
}
return(n);
}
