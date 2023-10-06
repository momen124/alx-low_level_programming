#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
int i;
char j;
for (i = 0 ; i < 10 ; i++)
for (j ='a' ; j <= 'f' ; j++)
putchar(i + '0');
putchar('\n');
return (0);
}
